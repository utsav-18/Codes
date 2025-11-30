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

    node *deletenode(node *head,int target){
        if(head->data == target){
            head = head->next;
            return head;
        }
        node*temp=head;
            while(temp->next->data != target){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            return head;
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
                    deletenode(a,2);
                    display(a);

        }