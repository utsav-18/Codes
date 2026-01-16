# # KNN on Iris Dataset - Simple Example

# from sklearn.datasets import load_iris
# from sklearn.model_selection import train_test_split
# from sklearn.neighbors import KNeighborsClassifier
# from sklearn.metrics import accuracy_score

# # Step 1: Load the dataset
# iris = load_iris()
# X = iris.data       # Features
# y = iris.target     # Labels

# # Step 2: Split into training and testing (80% train, 20% test)
# X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# # Step 3: Create KNN model (k=3)
# knn = KNeighborsClassifier(n_neighbors=3)

# # Step 4: Train the model
# knn.fit(X_train, y_train)

# # Step 5: Make predictions
# y_pred = knn.predict(X_test)

# # Step 6: Check accuracy
# print("Accuracy:", accuracy_score(y_test, y_pred))

# # Step 7: Example prediction
# sample = [[5.1, 3.5, 1.4, 0.2]]  # Example flower
# print("Predicted class:", iris.target_names[knn.predict(sample)[0]])
