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
            //for getting the element at the given index;
            int getAtIdx(int idx){
                   if(idx<0 || idx>=size){
                    return -1;
                   } 
                   else if(idx==0) return head->data;
                   else if(idx==size-1) return tail->data;
                   else {
                    node *temp =head;
                    for(int i=1;i<=idx;i++){
                        temp = temp->next;
                    }
                    return temp->data;
                   }
                }

            //inserting an element at last;
            void insertAtEnd(int data){
                node *temp=new node(data);
                if(size==0) head = tail = temp;
                else {
                    tail->next=temp;
                    tail=temp;
                }
                size++;
            }
            //insertin an element in starting;
            void insertAtstart(int data){
                node *temp=new node(data);
                if(size==0) head = tail = temp;
                else {
                    temp->next=head;
                    head=temp;
                }
                size++;
            }
            //to display the given element;
            void display(){
                node *temp=head;
                while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
                cout<<endl;
            }   
            // to insert an element at the given position;
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
        ll.insertAtEnd(0);
        ll.insertAtEnd(1);
        ll.insertAtEnd(2);
        ll.insertAtEnd(3);
        ll.insertAtEnd(4);
        ll.insertAtEnd(5);

            ll.display();

            cout<<ll.getAtIdx(0)<<endl;
            cout<<ll.getAtIdx(1)<<endl;
            cout<<ll.getAtIdx(2)<<endl;
            cout<<ll.getAtIdx(3)<<endl;
            cout<<ll.getAtIdx(4)<<endl;
            cout<<ll.getAtIdx(5)<<endl;

    }