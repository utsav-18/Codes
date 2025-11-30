#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void disp(struct node *ptr) {
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void add_at_last(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

int main() {
    struct node *h1 = (struct node *)malloc(sizeof(struct node));
    struct node *h2 = (struct node *)malloc(sizeof(struct node));
    struct node *h3 = (struct node *)malloc(sizeof(struct node));

    h1->data = 4;
    h2->data = 5;
    h3->data = 6;

    h1->next = h2;
    h2->next = h3;
    h3->next = NULL;

    add_at_last(h1, 7);

    disp(h1);

    return 0;
}
