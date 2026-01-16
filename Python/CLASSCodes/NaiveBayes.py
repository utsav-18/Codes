import os
import io
import zipfile
import random
import requests
from datetime import datetime

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.naive_bayes import MultinomialNB
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
import matplotlib.pyplot as plt
import seaborn as sns
import joblib

# -----------------------------
# Config
# -----------------------------
ZIP_URL = "https://archive.ics.uci.edu/ml/machine-learning-databases/00228/smsspamcollection.zip"
ZIP_LOCAL = "smsspamcollection.zip"
DATA_DIR = "data"
MODELS_DIR = "models"
OUTPUT_DIR = "output"
RANDOM_STATE = 42
TEST_SIZE = 0.2

os.makedirs(DATA_DIR, exist_ok=True)
os.makedirs(MODELS_DIR, exist_ok=True)
os.makedirs(OUTPUT_DIR, exist_ok=True)

# -----------------------------
# Download dataset
# -----------------------------
def download_dataset():
    local_path = os.path.join(DATA_DIR, ZIP_LOCAL)
    if os.path.exists(local_path):
        print(f"[+] Dataset zip already exists: {local_path}")
        return local_path

    print("[*] Downloading dataset from UCI...")
    resp = requests.get(ZIP_URL, timeout=30)
    resp.raise_for_status()
    with open(local_path, "wb") as f:
        f.write(resp.content)
    print(f"[+] Download complete: {local_path}")
    return local_path

# -----------------------------
# Load dataset from zip
# -----------------------------
def load_data_from_zip(zip_path):
    with zipfile.ZipFile(zip_path, "r") as z:
        fname = None
        for name in z.namelist():
            if "SMSSpamCollection" in name:
                fname = name
                break
        if fname is None:
            raise FileNotFoundError("SMSSpamCollection not found inside zip")
        with z.open(fname) as f:
            # file format: label \t text
            df = pd.read_csv(f, sep="\t", header=None, names=["label", "text"], quoting=3, engine="python")
    return df

# -----------------------------
# Preprocess
# -----------------------------
def preprocess(df):
    df = df.copy()
    df["text"] = df["text"].astype(str).str.lower().str.strip()
    # optional: remove empty rows
    df = df[df["text"].str.len() > 0].reset_index(drop=True)
    return df

# -----------------------------
# Train / evaluate
# -----------------------------
def train_eval(df):
    X = df["text"]
    y = df["label"]  # 'ham' or 'spam'

    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=TEST_SIZE, random_state=RANDOM_STATE, stratify=y
    )

    print(f"[+] Train size: {len(X_train)}  Test size: {len(X_test)}")

    # TF-IDF vectorizer
    vec = TfidfVectorizer(ngram_range=(1,2), min_df=2, max_df=0.9)
    X_train_tfidf = vec.fit_transform(X_train)
    X_test_tfidf = vec.transform(X_test)

    print(f"[+] TF-IDF shape: {X_train_tfidf.shape}")

    # Train Multinomial Naive Bayes
    clf = MultinomialNB(alpha=1.0)
    clf.fit(X_train_tfidf, y_train)

    # Predict + metrics
    y_pred = clf.predict(X_test_tfidf)
    acc = accuracy_score(y_test, y_pred)
    print(f"\n=== Results (test set) ===")
    print(f"Accuracy: {acc:.4f}\n")
    print("Classification report:")
    print(classification_report(y_test, y_pred, digits=4))

    # Confusion matrix & save figure
    cm = confusion_matrix(y_test, y_pred, labels=["ham", "spam"])
    plt.figure(figsize=(5,4))
    sns.heatmap(cm, annot=True, fmt="d", cmap="Blues",
                xticklabels=["ham", "spam"], yticklabels=["ham", "spam"])
    plt.xlabel("Predicted")
    plt.ylabel("Actual")
    plt.title("Confusion Matrix")
    ts = datetime.now().strftime("%Y%m%d_%H%M%S")
    cm_path = os.path.join(OUTPUT_DIR, f"confusion_matrix_{ts}.png")
    plt.tight_layout()
    plt.savefig(cm_path)
    plt.close()
    print(f"[+] Confusion matrix saved to: {cm_path}")

    # Save model and vectorizer
    model_path = os.path.join(MODELS_DIR, f"multinomial_nb_{ts}.joblib")
    vec_path = os.path.join(MODELS_DIR, f"tfidf_vectorizer_{ts}.joblib")
    joblib.dump(clf, model_path)
    joblib.dump(vec, vec_path)
    print(f"[+] Model saved to: {model_path}")
    print(f"[+] Vectorizer saved to: {vec_path}")

    # Show some example predictions
    n_examples = 8
    sample_idx = random.sample(list(X_test.index), min(n_examples, len(X_test)))
    samples = X_test.loc[sample_idx]
    sample_preds = clf.predict(vec.transform(samples))
    print("\nSome example predictions:")
    for text, actual, pred in zip(samples, y_test.loc[sample_idx], sample_preds):
        txt = text.replace("\n"," ")[:160]
        ell = "..." if len(text) > 160 else ""
        print("----")
        print(f"Text: {txt}{ell}")
        print(f"Actual: {actual}  Pred: {pred}")

    return {
        "accuracy": acc,
        "confusion_matrix_path": cm_path,
        "model_path": model_path,
        "vectorizer_path": vec_path
    }

# -----------------------------
# Main
# -----------------------------
def main():
    try:
        zip_path = download_dataset()
        df = load_data_from_zip(zip_path)
        print(f"[+] Raw data shape: {df.shape}")
        print(df["label"].value_counts().to_string())
        df = preprocess(df)
        results = train_eval(df)
        print("\nAll done. Outputs in the folders: data/, models/, output/")
    except Exception as e:
        print("[!] Error:", str(e))

if __name__ == "__main__":
    main()
