#include <stdio.h>
#include <stdlib.h>
    struct node {
        int data;
        struct node *next;
    };

    struct node *add_beg(struct node *head,int d){
        struct node *ptr = malloc(sizeof(struct node));
        ptr->data=d;
        ptr->next=NULL;
        ptr->next=head;
        head=ptr;
        return head;
    }

    int main(){
        struct node *head =malloc(sizeof(struct node));
        head->data=45;
        head->next=NULL;
        struct node *ptr=malloc(sizeof(struct node));
        ptr->data=98;
        ptr->next=NULL;
        head->next=ptr;



        head = add_beg(head,32);
        head = add_beg(head,21);

        ptr=head;

        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
            return 0;
    }
