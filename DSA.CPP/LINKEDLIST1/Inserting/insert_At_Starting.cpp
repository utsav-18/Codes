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
    }