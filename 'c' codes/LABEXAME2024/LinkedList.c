#include<stdio.h>
#include <stdlib.h>
 struct node{
    int data;
    struct node * next;
 };

    struct node * newNode(int data){
        struct node * n = (struct node*)malloc(sizeof(struct node));
        n->data=data;
        n->next=NULL;
        return n;
    }

    int main(){
        struct node * a=newNode(0);
        struct node * b=newNode(1);
        struct node * c=newNode(2);
        struct node * d=newNode(3);

        a->next=b;
        b->next=c;
        c->next=d;
        d->next=NULL;

        struct node * ptr = a;

        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        } 

    }