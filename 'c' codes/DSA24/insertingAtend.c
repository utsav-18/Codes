#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory Allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;  // Since it will be the last node, next is NULL
    return newnode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct node** head, int data) {
    struct node* newnode = createNode(data);
    
    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    
    // Traverse to the last node
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Point the last node's next to the new node
    temp->next = newnode;
}

// Function to display the linked list
void disp(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL;  // Initialize an empty list (head is NULL)
    
    // Insert nodes at the end
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // Display the linked list
    disp(head);  // Output: 1 2 3

    return 0;
}
