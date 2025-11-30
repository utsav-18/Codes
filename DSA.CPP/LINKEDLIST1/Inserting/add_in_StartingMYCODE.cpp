#include <iostream>
using namespace std;
    class node{
        public:
        int data;
        node *next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
    };
        node  *add_atStarting(int data,node *head){
                node *h = new node(data);
                h->next=head;
                return h;
        }

        void display(node *head){
            node* ptr = head;
            while(ptr!=NULL){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
            cout<<endl;
        }

        int main(){
            node* a = new node(1);
            node* b = new node(2);
            node* c = new node(3);
            a->next=b;
            b->next=c;
            c->next=NULL;
            display(a);
            a=add_atStarting(0,a);
            display(a);
            a=add_atStarting(-1,a);
            display(a);
            a=add_atStarting(-2,a);
            display(a);

        }    