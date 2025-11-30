#include <iostream>
using namespace std;

    class Node{
        public:
        int data;
        Node* next;
            Node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

    void traverse(Node* head) {
        while(head and head->next) {
        cout << head->data <<" ";
        head = head->next->next;
        }
    }

    int main(){
        Node *a = new Node(1);
        Node *b = new Node(2);
        Node *c = new Node(3);
        Node *d = new Node(4);
        Node *e = new Node(5);

        a->next=b;
        b->next=c;
        c->next=d;
        d->next=e;
        e->next=NULL;

            // Node *temp = a;
            // while(temp!=NULL){
            //     cout<<temp->data<<"\n";
            //     temp=temp->next;
            // }

                traverse(a);
    }