#include <iostream>
    using namespace std;

        class Node{
            public:

            int data;
            Node * next;
            Node * prev;
                Node(int data){
                    this->data=data;
                    this->next=NULL;
                    this->prev=NULL;
                }

        };

        void display(Node * head){
            while(head){
                cout<<head->data<<" ";
                head=head->next;
            }
            cout<<endl;
        }

        void reverse(Node * tail){
            while (tail)
            {
                cout<<tail->data<<" ";
                tail=tail->prev;
            }
            cout<<endl;
        }

            int main() {
                
                Node * a = new Node(1);
                Node * b = new Node(2);
                Node * c = new Node(3);
                Node * d = new Node(4);
                Node * e = new Node(5);

                    a->next=b;
                    b->next=c;
                    c->next=d;
                    d->next=e;
            
                    e->prev=d;
                    d->prev=c;
                    c->prev=b;
                    b->prev=a;

                    display(a);
                    reverse(e);
                     
            }