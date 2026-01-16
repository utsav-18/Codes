# decision_tree_mushroom.py
# Fixed: handles cases where test set doesn't contain all classes.
# Updated to provide matching 'labels' and 'target_names' to classification_report.

import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import joblib

from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split, GridSearchCV
from sklearn.tree import DecisionTreeClassifier, plot_tree, export_text
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

# -----------------------------
# Config
# -----------------------------
DATA_FILE = "exp.xlsx"
SAVE_BEST_MODEL = "best_decision_tree_model.joblib"
SAVE_PRUNED_MODEL = "pruned_decision_tree_model.joblib"
SAVE_LABEL_ENCODER = "label_encoder.joblib"
SAVE_FEATURE_ENCODERS = "feature_label_encoders.joblib"

# -----------------------------
# 1) Load dataset
# -----------------------------
if not os.path.exists(DATA_FILE):
    raise FileNotFoundError(f"'{DATA_FILE}' not found. Put exp.xlsx in the script folder.")

df = pd.read_excel(DATA_FILE)
print("✅ Loaded:", DATA_FILE)
print("Shape:", df.shape)
print(df.head())

# -----------------------------
# 2) Auto-detect target column (case-insensitive)
# -----------------------------
target_candidates = [col for col in df.columns if str(col).strip().lower() == "class"]
target_col = target_candidates[0] if target_candidates else df.columns[-1]
print("\nTarget column used:", repr(target_col))

# -----------------------------
# 3) Prepare features and target
# -----------------------------
X = df.drop(columns=[target_col]).copy()
y = df[target_col].copy()

print("\nTarget value counts (original labels):")
print(y.value_counts())

# -----------------------------
# 4) Encode features & target
# -----------------------------
feature_labelers = {}
X_encoded = X.copy()

for col in X.columns:
    if X[col].dtype == object or X[col].dtype.name == "category":
        le_f = LabelEncoder()
        X_encoded[col] = le_f.fit_transform(X[col].astype(str))
        feature_labelers[col] = le_f
    else:
        X_encoded[col] = X[col]

le = LabelEncoder()
y_encoded = le.fit_transform(y.astype(str))
joblib.dump(le, SAVE_LABEL_ENCODER)
print(f"\nSaved label encoder to '{SAVE_LABEL_ENCODER}'")

print("\nSample encoded features:")
print(X_encoded.head())

# -----------------------------
# 5) Decide whether to stratify
# -----------------------------
unique, counts = np.unique(y_encoded, return_counts=True)
class_counts = dict(zip(unique, counts))
min_count = min(counts)
print("\nClass counts (encoded):", class_counts)

if min_count < 2:
    stratify_param = None
    print("⚠️ Some classes have <2 samples. Will NOT stratify the train/test split to avoid error.")
else:
    stratify_param = y_encoded
    print("✅ All classes have >=2 samples. Using stratified split.")

# -----------------------------
# 6) Train/test split
# -----------------------------
X_train, X_test, y_train, y_test = train_test_split(
    X_encoded, y_encoded, test_size=0.2, random_state=42, stratify=stratify_param
)
print(f"\nTrain shape: {X_train.shape}, Test shape: {X_test.shape}")

# -----------------------------
# helper: safe classification report & confusion plot
# -----------------------------
def safe_report_and_confusion(y_true, y_pred, label_encoder, title_prefix=""):
    """
    Generate classification report and confusion heatmap for the *present* classes.
    Uses labels=present_labels and target_names mapped via label_encoder.inverse_transform.
    """
    # determine classes actually present in either true or predicted to avoid mismatch
    present_labels = np.unique(np.concatenate([y_true, y_pred]))
    target_names_present = [str(x) for x in label_encoder.inverse_transform(present_labels)]
    # print accuracy + classification report with explicit labels
    acc = accuracy_score(y_true, y_pred)
    print(f"\n{title_prefix} Accuracy: {acc:.6f}")
    print(f"{title_prefix} Classification Report:")
    print(classification_report(y_true, y_pred, labels=present_labels, target_names=target_names_present))
    # confusion matrix and heatmap for present labels (rows/cols align)
    cm = confusion_matrix(y_true, y_pred, labels=present_labels)
    plt.figure(figsize=(7, 6))
    sns.heatmap(cm, annot=True, fmt="d", cmap="Blues",
                xticklabels=target_names_present, yticklabels=target_names_present)
    plt.xlabel("Predicted")
    plt.ylabel("Actual")
    plt.title(f"{title_prefix} Confusion Matrix (present classes only)")
    plt.tight_layout()
    plt.show()

# -----------------------------
# 7) Train baseline Decision Tree
# -----------------------------
clf = DecisionTreeClassifier(random_state=42)
clf.fit(X_train, y_train)
y_pred = clf.predict(X_test)

print("\n--- Baseline Performance ---")
# Use safe reporting function to handle missing classes in test/pred
safe_report_and_confusion(y_test, y_pred, le, title_prefix="Baseline")

# -----------------------------
# 8) Plot decision tree (limit depth)
# -----------------------------
tree_max_depth = 3
# For plotting, use class names known to the trained classifier (clf.classes_)
# Convert those to original labels:
trained_class_labels = clf.classes_
trained_class_names = [str(x) for x in le.inverse_transform(trained_class_labels)]

plt.figure(figsize=(18, 10))
try:
    plot_tree(clf, feature_names=X_encoded.columns, class_names=trained_class_names,
              filled=True, rounded=True, max_depth=tree_max_depth)
    plt.title(f"Decision Tree (top {tree_max_depth} levels)")
    plt.show()
except Exception as e:
    print("Plotting tree failed:", e)
    try:
        print("\nTextual tree (partial):")
        print(export_text(clf, feature_names=list(X_encoded.columns), max_depth=4))
    except Exception:
        pass

# -----------------------------
# 9) Hyperparameter tuning (GridSearchCV)
# -----------------------------
print("\n--- Running GridSearchCV (may take time) ---")
param_grid = {
    'criterion': ['gini', 'entropy'],
    'max_depth': [3, 5, 8, None],
    'min_samples_split': [2, 5, 10],
    'min_samples_leaf': [1, 2, 4]
}

gs = GridSearchCV(DecisionTreeClassifier(random_state=42), param_grid, cv=5, scoring='accuracy', n_jobs=-1, verbose=1)
gs.fit(X_train, y_train)

best_model = gs.best_estimator_
print("Best params:", gs.best_params_)
print("Best CV score:", gs.best_score_)

# Evaluate tuned model safely
y_best_pred = best_model.predict(X_test)
safe_report_and_confusion(y_test, y_best_pred, le, title_prefix="Tuned Model")

joblib.dump(best_model, SAVE_BEST_MODEL)
print(f"Saved best model to '{SAVE_BEST_MODEL}'")

# -----------------------------
# 10) Cost complexity pruning (ccp_alpha)
# -----------------------------
print("\n--- Cost-Complexity Pruning ---")
unpruned = DecisionTreeClassifier(random_state=42)
unpruned.fit(X_train, y_train)
path = unpruned.cost_complexity_pruning_path(X_train, y_train)
ccp_alphas = path.ccp_alphas

pruned_trees, train_scores, test_scores = [], [], []
for alpha in ccp_alphas:
    t = DecisionTreeClassifier(random_state=42, ccp_alpha=alpha)
    t.fit(X_train, y_train)
    pruned_trees.append(t)
    train_scores.append(t.score(X_train, y_train))
    test_scores.append(t.score(X_test, y_test))

plt.figure(figsize=(8,5))
plt.plot(ccp_alphas, train_scores, marker='o', label='Train Acc')
plt.plot(ccp_alphas, test_scores, marker='o', label='Test Acc')
if len(ccp_alphas) > 2:
    plt.xscale('log')
plt.xlabel('ccp_alpha')
plt.ylabel('Accuracy')
plt.title('Accuracy vs ccp_alpha')
plt.legend()
plt.grid(True, ls='--', linewidth=0.5)
plt.show()

best_idx = int(np.argmax(test_scores))
best_alpha = ccp_alphas[best_idx]
best_pruned_tree = pruned_trees[best_idx]
print(f"Selected ccp_alpha = {best_alpha:.6f} (test acc = {test_scores[best_idx]:.4f})")

y_pruned = best_pruned_tree.predict(X_test)
safe_report_and_confusion(y_test, y_pruned, le, title_prefix="Pruned Tree")

joblib.dump(best_pruned_tree, SAVE_PRUNED_MODEL)
print(f"Saved pruned model to '{SAVE_PRUNED_MODEL}'")

# Save feature encoders if any
if feature_labelers:
    joblib.dump(feature_labelers, SAVE_FEATURE_ENCODERS)
    print(f"Saved feature label encoders to '{SAVE_FEATURE_ENCODERS}'")

print("\nAll done. Files saved:")
print(" -", SAVE_LABEL_ENCODER)
print(" -", SAVE_BEST_MODEL)
print(" -", SAVE_PRUNED_MODEL)
if feature_labelers:
    print(" -", SAVE_FEATURE_ENCODERS)
