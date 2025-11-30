#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
};

// Function to create a new node
struct node *createNode(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory Allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

// Function to insert a node at the beginning
void insertAtBeginning(struct node **head, int data) {
    struct node *newnode = createNode(data);
    newnode->next = *head;  // Point the new node's next to the current head
    *head = newnode;        // Update the head to the new node
}

// struct node *add_beg(struct node *head,int d){
//     struct node *ptr = malloc(sizeof(struct node));
//     ptr->data=d;
//     ptr->next=NULL;
//     ptr->next=head;
//     head=ptr;
//     return head;
// }

// Function to display the linked list
void disp(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {


     struct node *h1;
     struct node *h2;
     struct node *h3;
     struct node* h4 = NULL;  // Initialize the list (head is NULL)

     h1=(struct node*)malloc(sizeof(struct node));
      h2=(struct node*)malloc(sizeof(struct node));
       h3=(struct node*)malloc(sizeof(struct node));

        h1->data=0;
        h2->data=1;
        h3->data=2;

        h1->next=h2;
        h2->next=h3;
        h3->next=h4;

    // Insert nodes at the beginning
    insertAtBeginning(&h1, 3);
    insertAtBeginning(&h1, 4);
    insertAtBeginning(&h1, 5);
   // add_beg(h1,-1);


    // Display the linked list
    disp(h1);  // Output: 3 2 1

    return 0;
}
