#include <iostream>
    using namespace std;
   
   class node{
    public: 
        int data;
        node* next;
           node(int data){
                this->data=data;
                this->next=NULL;
           } 
    };

        void display(node *ptr){
            node *p=ptr;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
        }

        void addAtlast(node *head,int data){
            node* temp = head;
            node* ptr = new node(data);
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }

    int main(){
        node *a = new node(1);
        node *b = new node(10);
        node *c = new node(100);

            a->next=b;
            b->next=c;
            c->next=NULL;
            addAtlast(a,1000);
            display(a);
    }