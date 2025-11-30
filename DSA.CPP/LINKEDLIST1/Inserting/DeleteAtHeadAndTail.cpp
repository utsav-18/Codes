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

     class LinkedList{
        public:
        node *head;
        node *tail;
            int size;
            LinkedList(){
                head=tail=NULL;
                size=0;
            }

        void deleteAthead(){
            if(size==0) {cout<<"List is Empty!";}
            else if(size==1) {head=tail=NULL;size--;}
            else if(size>=1){
                head=head->next;
                size--;
            }
        }

        void deleteAtTail(){
            if(size==0) {cout<<"List is Empty!";return;}
            node *temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }

        void insertAtEnd(int data){
                node *temp=new node(data);
                if(size==0) head = tail = temp;
                else {
                    tail->next=temp;
                    tail=temp;
                }
                size++;
            }
        void insertAtstart(int data){
                node *temp=new node(data);
                if(size==0) head = tail = temp;
                else {
                    temp->next=head;
                    head=temp;
                }
                size++;
            }
        void display(){
                node *temp=head;
                while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
                cout<<endl;
            }   
            
        void insertAtIdx(int idx, int data) {
                if (idx < 0 || idx > size) {
                    cout << "Invalid Index" << endl;
                } 
                else if (idx == 0) {
                    insertAtstart(data);
                } 
                    else if (idx == size) {
                             insertAtEnd(data);
                    } 
                    /**/
                        else {
                             node *temp = new node(data);
                             node *t = head;
                          for (int i = 1; i < idx; i++) {
                               t = t->next;
                         }
                            temp->next = t->next;
                            t->next = temp;
                            size++;
                    /**/
                }
            }               
    };

    int main() {
        LinkedList l;
        l.insertAtEnd(0);
        l.insertAtEnd(1);
        l.insertAtEnd(2);
        l.insertAtEnd(3);
        l.insertAtEnd(4);
        l.insertAtEnd(5);
        l.display();
        l.deleteAthead();
        l.deleteAtTail();
        l.display();

    }

