import numpy as np

import pandas as pd

import matplotlib.pyplot as plt

from sklearn.datasets import load_iris

from sklearn.preprocessing import StandardScaler

from sklearn.decomposition import PCA



# 1. Load the dataset

iris = load_iris()

X = iris.data # Features

y = iris.target # Target labels

target_names = iris.target_names



# 2. Standardize the data (PCA works best with standardized data)

scaler = StandardScaler()

X_std = scaler.fit_transform(X)



# 3. Apply PCA (reduce to 2 components for visualization)

pca = PCA(n_components=2)

X_pca = pca.fit_transform(X_std)



# 4. Create a DataFrame for easier plotting

df_pca = pd.DataFrame(data=X_pca, columns=['PC1', 'PC2'])

df_pca['target'] = y



# 5. Plot PCA result

plt.figure(figsize=(8,6))

colors = ['red', 'green', 'blue']

for target, color in zip([0, 1, 2], colors):

  subset = df_pca[df_pca['target'] == target]

  plt.scatter(subset['PC1'], subset['PC2'], label=target_names[target], color=color, alpha=0.7)



plt.xlabel('Principal Component 1')

plt.ylabel('Principal Component 2')

plt.title('PCA on Iris Dataset')

plt.legend()

plt.grid(True)

plt.show()



# 6. Print explained variance

print("Explained variance ratio:", pca.explained_variance_ratio_)