#include<iostream>
using namespace std;

class node{
    public:
    node * next;
    int data;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

    node * inStart(node*head,int data){
        node *ptr=new node(data);
        ptr->next=head;
        return ptr;
    }

    void inEnd(node * head , int data){
        node * temp = new node(data);
        node*ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }  

    void beg(node *head,int data){
        node * temp = new node(data);
        temp->next=head;
    }

  display(node *head)
    {
        node * ptr =head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

    int main(){

        node *a = new node(1);
        node *b = new node(2);
        node *c = new node(3);
        node *d = new node(4);

        a->next=b;
        b->next=c;
        c->next=d;
        d->next=NULL;

    display(a);
    a=inStart(a,0);
    a=inStart(a,50);
    inEnd(a,10);
    inEnd(a,20);
    a=inStart(a,0);
    beg(a,4);
    display(a);

    }