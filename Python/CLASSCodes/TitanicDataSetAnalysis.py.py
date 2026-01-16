import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA

# 1. Load Titanic dataset
df = pd.read_csv(r"U:\OneDrive\Desktop\Python\CLASSCodes\train.csv")

# 🔹 Print column names and first few rows
print("\n✅ Columns in dataset:")
print(df.columns.tolist())
print("\n📌 First 5 rows of dataset:")
print(df.head())

# 2. Drop irrelevant columns
df = df.drop(['Name', 'Ticket', 'Cabin', 'PassengerId'], axis=1)

# 3. Handle missing values
df['Age'] = df['Age'].fillna(df['Age'].median())
df['Embarked'] = df['Embarked'].fillna(df['Embarked'].mode()[0])
df['Fare'] = df['Fare'].fillna(df['Fare'].median())

# 4. Convert categorical columns into numeric (One-Hot Encoding)
df = pd.get_dummies(df, drop_first=True)

# 5. Separate features and target
X = df.drop('Survived', axis=1)
y = df['Survived']

# 6. Standardize the data
scaler = StandardScaler()
X_std = scaler.fit_transform(X)

# 7. Apply PCA
pca = PCA(n_components=2)
X_pca = pca.fit_transform(X_std)

# 8. Create DataFrame for plotting
df_pca = pd.DataFrame(data=X_pca, columns=['PC1', 'PC2'])
df_pca['Survived'] = y

# 9. Plot PCA
plt.figure(figsize=(8,6))
colors = {0: 'red', 1: 'green'}

for target in [0, 1]:
    subset = df_pca[df_pca['Survived'] == target]
    plt.scatter(subset['PC1'], subset['PC2'],
                color=colors[target], label=f"Survived={target}", alpha=0.7)

plt.xlabel("Principal Component 1")
plt.ylabel("Principal Component 2")
plt.title("PCA on Titanic Dataset")
plt.legend()
plt.grid(True)
plt.show()

# 10. Explained variance
print("\n🔹 Explained variance ratio:", pca.explained_variance_ratio_)
