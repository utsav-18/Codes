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
    void display(node *head) {
        node *temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
         cout << endl;
        }

        void deleteNode(node * n){ //without giving head 
            n->data = n->next->data;
            n->next=n->next->next;
        }

        int main(){
                node *a = new node(0);
                node *b = new node(1);
                node *c = new node(2);
                node *d = new node(3);

                a->next = b;
                b->next = c;
                c->next = d;

                    display(a);
                    deleteNode(a);
                    deleteNode(c);
                    display(a);

        }