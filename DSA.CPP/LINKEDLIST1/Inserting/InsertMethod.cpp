#include<iostream>
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

    int main(){
        LinkedList ll;
        ll.insertAtEnd(1);
        ll.insertAtEnd(2);
        ll.display();
        //cout<<"Size: "<<ll.size<<endl;
        ll.insertAtEnd(3);
        ll.insertAtEnd(4);
        ll.display();
        //cout<<"Size: "<<ll.size<<endl;
        ll.insertAtstart(0);
        ll.insertAtstart(-1);
        ll.display();
        ll.insertAtIdx(3,55);
        ll.insertAtIdx(4,45);
        ll.display();
    }