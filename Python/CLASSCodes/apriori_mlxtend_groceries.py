"""
apriori_auto_search.py

- Automatically tries multiple (min_support, min_confidence) combos (strict -> loose)
- Stops when it finds a non-empty set of association rules and saves results
- Uses mlxtend if available (recommended). Falls back to a pure-Python apriori if needed.
- Robust transaction loader that detects 'itemDescription' etc.

Usage:
    pip install pandas mlxtend
    python apriori_auto_search.py
"""

import sys
import csv
from collections import defaultdict
from itertools import combinations
import pandas as pd

CSV_PATH = "Groceries_dataset.csv"

# Grid of thresholds to try (order: stricter -> looser)
SUPPORTS_TO_TRY = [0.01, 0.005, 0.003, 0.002, 0.001, 0.0005]
CONFIDENCES_TO_TRY = [0.6, 0.5, 0.4, 0.35, 0.3, 0.25, 0.2, 0.15]

TOP_K_RULES = 30  # how many top rules to print/save for the found combo

# ------------------------------
# Helpers: robust column detection + loader
# ------------------------------
def find_col(df, names):
    cols_lower = {c.lower(): c for c in df.columns}
    for n in names:
        if n in cols_lower:
            return cols_lower[n]
    return None

def load_transactions(path):
    df = pd.read_csv(path)
    print("Detected columns:", list(df.columns))

    member_col = find_col(df, ["member_number", "member", "customer_id", "memberid", "member id"])
    date_col = find_col(df, ["date", "transaction_date", "purchase_date"])
    transaction_col = find_col(df, ["transaction", "transactionid", "transaction_id", "basket_id", "basket"])
    item_col = find_col(df, ["item", "itemdescription", "description", "item_description", "itemname", "item_name"])

    # 1) member+date+item -> group by member+date
    if member_col and date_col and item_col:
        df['trx_id'] = df[member_col].astype(str) + "_" + df[date_col].astype(str)
        transactions = (
            df.groupby('trx_id')[item_col]
            .apply(lambda s: s.dropna().astype(str).str.strip().str.lower().tolist())
            .tolist()
        )
        print(f"Grouped by Member+Date. Loaded {len(transactions)} transactions.")
        return transactions

    # 2) transaction id + item -> group by transaction id
    if transaction_col and item_col:
        transactions = (
            df.groupby(transaction_col)[item_col]
            .apply(lambda s: s.dropna().astype(str).str.strip().str.lower().tolist())
            .tolist()
        )
        print(f"Grouped by Transaction ID. Loaded {len(transactions)} transactions.")
        return transactions

    # 3) single column: comma-separated items
    if df.shape[1] == 1:
        col = df.columns[0]
        transactions = df[col].astype(str).apply(
            lambda x: [i.strip().lower() for i in x.split(',') if i.strip()]
        ).tolist()
        print(f"Single-column CSV assumed. Loaded {len(transactions)} transactions.")
        return transactions

    # 4) item column present but no tx-id -> try grouping by member if present
    if item_col:
        if member_col:
            df['trx_id'] = df[member_col].astype(str)
            transactions = (
                df.groupby('trx_id')[item_col]
                .apply(lambda s: s.dropna().astype(str).str.strip().str.lower().tolist())
                .tolist()
            )
            print(f"Grouped by Member ID. Loaded {len(transactions)} transactions.")
            return transactions
        else:
            # conservative: treat each item-row as its own small transaction
            transactions = df[item_col].dropna().astype(str).apply(lambda s: [s.strip().lower()]).tolist()
            print(f"No tx id found; treated each item-row as its own transaction ({len(transactions)}).")
            return transactions

    # 5) fallback: each row's non-empty text cells (skip numeric-only)
    transactions = []
    for _, row in df.iterrows():
        items = []
        for col, val in row.items():
            if pd.isna(val):
                continue
            s = str(val).strip()
            if not s:
                continue
            # skip pure numbers
            if isinstance(val, (int, float)):
                continue
            items.append(s.lower())
        if items:
            transactions.append(items)
    print(f"Fallback grouping: loaded {len(transactions)} transactions (row text cells).")
    return transactions

# ------------------------------
# mlxtend-based compute (fast)
# ------------------------------
def compute_with_mlxtend(transactions, min_support, min_confidence):
    from mlxtend.preprocessing import TransactionEncoder
    from mlxtend.frequent_patterns import apriori, association_rules

    te = TransactionEncoder()
    te_ary = te.fit(transactions).transform(transactions)
    onehot = pd.DataFrame(te_ary, columns=te.columns_)

    freq_itemsets = apriori(onehot, min_support=min_support, use_colnames=True)
    if freq_itemsets.empty:
        return freq_itemsets, pd.DataFrame()
    rules = association_rules(freq_itemsets, metric="confidence", min_threshold=min_confidence)
    return freq_itemsets, rules

# ------------------------------
# pure-Python Apriori & rules (slower fallback)
# ------------------------------
def apriori_pure_counts(transactions, min_support):
    n = len(transactions)
    min_count = max(1, int(min_support * n))
    # C1
    C1 = defaultdict(int)
    for trx in transactions:
        for item in set(trx):
            C1[frozenset([item])] += 1
    L1 = {itemset:cnt for itemset,cnt in C1.items() if cnt >= min_count}
    freq_counts = dict(L1)  # itemset -> count

    prev_L = set(L1.keys())
    k = 2
    while prev_L:
        candidates = set()
        prev_list = list(prev_L)
        for i in range(len(prev_list)):
            for j in range(i+1, len(prev_list)):
                union = prev_list[i] | prev_list[j]
                if len(union) == k:
                    candidates.add(union)
        if not candidates:
            break

        cand_count = defaultdict(int)
        for trx in transactions:
            s_trx = set(trx)
            for c in candidates:
                if c.issubset(s_trx):
                    cand_count[c] += 1

        new_L = {c:cnt for c,cnt in cand_count.items() if cnt >= min_count}
        if not new_L:
            break
        freq_counts.update(new_L)
        prev_L = set(new_L.keys())
        k += 1

    return freq_counts, n

def generate_rules_from_counts(freq_counts, n_transactions, min_confidence):
    # freq_counts: itemset (frozenset) -> count
    # convert to support
    freq_support = {iset: count / n_transactions for iset, count in freq_counts.items()}
    rules = []
    for itemset, s_item in freq_support.items():
        if len(itemset) < 2:
            continue
        items_list = list(itemset)
        for r in range(1, len(items_list)):
            for antecedent in combinations(items_list, r):
                A = frozenset(antecedent)
                B = itemset - A
                s_A = freq_support.get(A, 0)
                s_B = freq_support.get(B, 0)
                if s_A == 0:
                    continue
                confidence = s_item / s_A
                lift = (confidence / s_B) if s_B != 0 else None
                if confidence >= min_confidence:
                    rules.append({
                        'antecedent': set(A),
                        'consequent': set(B),
                        'support': s_item,
                        'confidence': confidence,
                        'lift': lift
                    })
    rules.sort(key=lambda x: (x['lift'] if x['lift'] is not None else 0), reverse=True)
    return rules, freq_support

# ------------------------------
# Auto search logic
# ------------------------------
def auto_search_and_save(transactions):
    # try mlxtend first if available
    mlxtend_available = False
    try:
        import mlxtend  # presence check
        mlxtend_available = True
    except Exception:
        mlxtend_available = False

    for sup in SUPPORTS_TO_TRY:
        for conf in CONFIDENCES_TO_TRY:
            print(f"\nTrying min_support={sup} , min_confidence={conf} ...")
            if mlxtend_available:
                try:
                    freq_itemsets, rules = compute_with_mlxtend(transactions, min_support=sup, min_confidence=conf)
                except Exception as e:
                    print("mlxtend error:", e)
                    freq_itemsets, rules = pd.DataFrame(), pd.DataFrame()
            else:
                freq_itemsets, rules = pd.DataFrame(), pd.DataFrame()

            # If mlxtend found rules, save and return
            if isinstance(rules, pd.DataFrame) and not rules.empty:
                print(f"Found {len(rules)} rules with min_support={sup} and min_confidence={conf} (mlxtend).")
                save_mlxtend_results(freq_itemsets, rules, sup, conf)
                return True

            # If mlxtend didn't yield rules or not available, try pure-python at this combo (but only for looser thresholds to save time)
            # We'll attempt pure python when sup <= 0.003 to avoid slowness on high supports (small benefit).
            if not mlxtend_available and sup <= 0.003:
                print("mlxtend not available — trying pure-Python Apriori for this combo.")
                freq_counts, n = apriori_pure_counts(transactions, min_support=sup)
                rules_list, freq_support = generate_rules_from_counts(freq_counts, n, min_confidence=conf)
                if rules_list:
                    print(f"Found {len(rules_list)} rules with pure-Python at sup={sup}, conf={conf}")
                    save_pure_results(freq_support, rules_list, sup, conf)
                    return True

            # If mlxtend available but no rules, still try pure for looser thresholds (rarely needed)
            if mlxtend_available and sup <= 0.002:
                print("mlxtend gave no rules for this combo — trying pure-Python fallback (looser sup).")
                try:
                    freq_counts, n = apriori_pure_counts(transactions, min_support=sup)
                    rules_list, freq_support = generate_rules_from_counts(freq_counts, n, min_confidence=conf)
                    if rules_list:
                        print(f"Pure-Python found {len(rules_list)} rules at sup={sup}, conf={conf}")
                        save_pure_results(freq_support, rules_list, sup, conf)
                        return True
                except Exception as e:
                    print("pure-Python attempt error:", e)

    # If no combo produced rules:
    print("\nNo rules found for any tried (support, confidence) combos.")
    print("Suggestions: try lower min_support values (e.g., 0.0005), lower min_confidence (e.g., 0.1), or inspect frequent itemsets.")
    # Save last frequent itemsets for inspection using the loosest support tried (if mlxtend available)
    if mlxtend_available:
        try:
            sup = SUPPORTS_TO_TRY[-1]
            fi, _ = compute_with_mlxtend(transactions, min_support=sup, min_confidence=0)
            fi.to_csv("frequent_itemsets_loosest_mlxtend.csv", index=False)
            print(f"Saved frequent_itemsets_loosest_mlxtend.csv (min_support={sup}) for inspection.")
        except Exception:
            pass
    return False

# ------------------------------
# Save functions
# ------------------------------
def save_mlxtend_results(freq_itemsets_df, rules_df, sup, conf):
    # Save CSVs with parameters in name
    fname_item = f"frequent_itemsets_mlxtend_sup{sup}.csv".replace('.', '_')
    fname_rules = f"association_rules_mlxtend_sup{sup}_conf{conf}.csv".replace('.', '_')
    freq_itemsets_df.to_csv(fname_item, index=False)
    rules_df.to_csv(fname_rules, index=False)
    print(f"Saved: {fname_item} , {fname_rules}")
    # Print top rules by lift
    if not rules_df.empty:
        print("\nTop rules by lift:")
        display_cols = ['antecedents', 'consequents', 'support', 'confidence', 'lift']
        # ensure columns present
        available = [c for c in display_cols if c in rules_df.columns]
        print(rules_df[available].sort_values(['lift', 'confidence'], ascending=False).head(TOP_K_RULES).to_string(index=False))

def save_pure_results(freq_support_dict, rules_list, sup, conf):
    fname_item = f"frequent_itemsets_pure_sup{sup}.csv".replace('.', '_')
    fname_rules = f"association_rules_pure_sup{sup}_conf{conf}.csv".replace('.', '_')
    # freq_support_dict: frozenset -> support
    with open(fname_item, 'w', newline='', encoding='utf-8') as f:
        w = csv.writer(f)
        w.writerow(["itemset", "support"])
        for iset, supv in sorted(freq_support_dict.items(), key=lambda x: -x[1]):
            w.writerow([";".join(sorted(iset)), supv])
    with open(fname_rules, 'w', newline='', encoding='utf-8') as f:
        w = csv.writer(f)
        w.writerow(["antecedent", "consequent", "support", "confidence", "lift"])
        for r in rules_list:
            w.writerow([";".join(sorted(r['antecedent'])), ";".join(sorted(r['consequent'])), r['support'], r['confidence'], r['lift']])
    print(f"Saved: {fname_item} , {fname_rules}")
    # print top rules
    print("\nTop rules by lift:")
    for r in rules_list[:TOP_K_RULES]:
        lift_str = f"{r['lift']:.4f}" if r['lift'] is not None else "N/A"
        print(f"{r['antecedent']} -> {r['consequent']} | sup={r['support']:.5f}, conf={r['confidence']:.4f}, lift={lift_str}")

# ------------------------------
# Small quick-check print helper
# ------------------------------
def print_sample_transactions(transactions, k=5):
    print(f"\nSample {k} transactions (first {k}):")
    for i, t in enumerate(transactions[:k], start=1):
        print(f" {i}. {t}")

# ------------------------------
# Main
# ------------------------------
def main():
    try:
        transactions = load_transactions(CSV_PATH)
    except FileNotFoundError:
        print(f"Error: {CSV_PATH} not found. Put the CSV in same folder.")
        sys.exit(1)
    except Exception as e:
        print("Error loading CSV:", e)
        sys.exit(1)

    print(f"Total transactions loaded: {len(transactions)}")
    if len(transactions) == 0:
        print("No transactions loaded — check the CSV format.")
        sys.exit(1)

    print_sample_transactions(transactions, k=5)

    found = auto_search_and_save(transactions)
    if found:
        print("\nDone — rules found and saved. Check the saved CSVs.")
    else:
        print("\nFinished search — no rules found. Consider lowering thresholds further or inspect frequent_itemsets_loosest_mlxtend.csv (if created).")

if __name__ == "__main__":
    main()
