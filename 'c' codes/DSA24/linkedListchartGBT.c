#include <stdio.h>
#include <stdlib.h>

// Define a structure for the Node
struct Node {
    int data;               // Data stored in the node
    struct Node* next;      // Pointer to the next node
};

// Function to create a new node
struct Node* createNode(int data) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;   // Assign data to the node
    newNode->next = NULL;   // Initialize next pointer to NULL
    return newNode;         // Return the newly created node
}

int main() {
    // Create a node with some data
    struct Node* node1 = createNode(10);
     struct Node* node2 = createNode(20);
    
    // Print the node's data and the next pointer (which should be NULL)
    printf("Node data: %d\n", node1->data);  // Output: Node data: 10
    printf("Next node: %p\n", node1->next);  // Output: Next node: (nil)
    
    printf("Node data: %d\n", node2->data);  
    printf("Next node: %p\n", node2->next);
    // Free the allocated memory
    free(node1);
    
    return 0;
}
