# Import core libraries

import pandas as pd

from sklearn.datasets import load_iris

from sklearn.model_selection import train_test_split

from sklearn.tree import DecisionTreeClassifier, plot_tree

from sklearn.metrics import accuracy_score, classification_report

import matplotlib.pyplot as plt



# Load dataset

iris = load_iris()



# Convert to DataFrame for easier viewing

df = pd.DataFrame(iris.data, columns=iris.feature_names)

df['species'] = iris.target



# Map numerical labels to species names

df['species'] = df['species'].map({0:'setosa', 1:'versicolor', 2:'virginica'})



# Display first few rows

print(df.head())



X = df.iloc[:, :-1]   # Features (first 4 columns)

y = df.iloc[:, -1]    # Target (species)



# Split into training (70%) and testing (30%)

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)



# Create model (you can tweak parameters)

model = DecisionTreeClassifier(

  criterion='entropy', # or 'gini'

  max_depth=3,     # limit tree depth for readability

  random_state=42

)



# Train model

model.fit(X_train, y_train)

# Make predictions

y_pred = model.predict(X_test)



# Evaluate accuracy

print("✅ Accuracy:", accuracy_score(y_test, y_pred))

print("\nClassification Report:\n", classification_report(y_test, y_pred))



plt.figure(figsize=(12,8))

plot_tree(

  model,

  feature_names=iris.feature_names,

  class_names=iris.target_names,

  filled=True,

  rounded=True,

  fontsize=10

)

plt.title("Decision Tree for Iris Dataset")

plt.show()