#include <iostream>
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

       void display(node *ptr){
            node *p=ptr;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }

int main(){
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);

    a->next=b;
    b->next=c;
    c->next=NULL;

display(a);
}