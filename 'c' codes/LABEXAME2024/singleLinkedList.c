#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *newNode(int data) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

void insertAtFirst(struct node **head, int val) {
    struct node *temp = newNode(val);
    temp->next = *head;
    *head = temp;
}

void insertAtLast(struct node **head, int val){
    struct node *temp = newNode(val);
    if (*head == NULL) {
        *head = temp;
        return;
    }
    struct node *ptr= *head; 
    while(ptr->next!=NULL){ 
        ptr=ptr->next; 
    } 
        ptr->next=temp;  
} 

    void insertAtidx(struct node **head, int val,int idx){
        struct node * temp = newNode(val); 
        struct node * ptr = *head;
        for(int i=1;i<idx;i++){
            ptr=ptr->next;
        }
            temp->next = ptr->next;
            ptr->next = temp;
    }

    void deleteFirst(struct node **head){
        *head=(*head)->next;
    }

    void deleteLast(struct node **head){
            struct node * temp = *head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;

    }

    void deleteIDX(struct node **head,int idx){
        struct node * temp = *head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }


void display(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;
    insertAtFirst(&head, 3);  
    insertAtFirst(&head, 2);  
    insertAtFirst(&head, 1);
    insertAtFirst(&head, 0);
    insertAtLast(&head, 4);
    insertAtLast(&head, 5);
    insertAtidx(&head,6,2);
    deleteIDX(&head,2);
    deleteIDX(&head,1);
    deleteFirst(&head);
    deleteLast(&head);
    deleteLast(&head);

    display(head);
    return 0;
}
