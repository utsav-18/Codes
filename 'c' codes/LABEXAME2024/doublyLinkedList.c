#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* newNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtBeg(struct node** head, int data) {
    struct node* temp = newNode(data);
    temp->next = *head;
    if (*head != NULL) { 
        (*head)->prev = temp;
    }
    *head = temp;
}

void insertAtLast(struct node** head, int data){
    struct node * temp = *head;
    struct node * last = newNode(data);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=last;
        last->prev=temp;
}

void insertAtIdx(struct node** head, int data,int idx){
    struct node * ptr = *head;
    struct node * temp = newNode(data);
    if(idx==0) {insertAtBeg(head,data);return;}
        for(int i=1;i<idx-1;i++){
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
        temp->next->prev=temp;
}

void traverse(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void REtraverse(struct node* head) {
    struct node* temp = head;
    while (temp->next!= NULL) {
        temp = temp->next;
    }

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL; 

    insertAtBeg(&head, 1);
    insertAtBeg(&head, 2); 
    insertAtBeg(&head, 3); 
    insertAtLast(&head,4);
    insertAtLast(&head,5);
    insertAtIdx(&head,100,0);

    printf("List after insertions: ");
    traverse(head); 
    REtraverse(head);

    return 0;
}
