#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the BST
struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to find the minimum value node in a subtree
struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a value from the BST
struct Node* delete(struct Node* root, int value) {
    if (root == NULL) {
        return root;
    }

    // Find the node to be deleted
    if (value < root->value) {
        root->left = delete(root->left, value);
    } else if (value > root->value) {
        root->right = delete(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        struct Node* temp = findMin(root->right);
        root->value = temp->value;
        root->right = delete(root->right, temp->value);
    }
    return root;
}

// Function to search for a value in the BST
int search(struct Node* root, int value) {
    if (root == NULL) {
        return 0; // Value not found
    }
    if (root->value == value) {
        return 1; // Value found
    }
    if (value < root->value) {
        return search(root->left, value);
    }
    return search(root->right, value);
}

// In-Order Traversal (Left, Root, Right)
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->value);
        inOrder(root->right);
    }
}

// Main function
int main() {
    struct Node* root = NULL;

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("In-Order Traversal: ");
    inOrder(root);
    printf("\n");

    // Search for values
    int key = 40;
    if (search(root, key)) {
        printf("Value %d found in the BST.\n", key);
    } else {
        printf("Value %d not found in the BST.\n", key);
    }

    // Delete a node
    root = delete(root, 50);
    printf("In-Order Traversal after deleting 50: ");
    inOrder(root);
    printf("\n");

    return 0;
}
