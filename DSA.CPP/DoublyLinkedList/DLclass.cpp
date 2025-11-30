#include <iostream>
using namespace std;

    class node{
        public:
        int data;
        node * next;
        node * prev;
        node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
    };

    class DLL{
        public:
        node *head;
        node *tail;
        int size;
            DLL(){
                head=tail=NULL;
                size=0;
            }

            void insertAtTail(int data){
                node *temp= new node(data);
                if(size==0) head=tail=temp;
                else{
                    tail->next=temp;
                    temp->prev=tail;
                    tail=temp;
                }
                size++;
            }

            void insertAtHead(int data){
                node *temp=new node(data);
                if(size==0) head=tail=temp;
                else{
                    temp->next=head;
                    head->prev=temp;
                    head=temp;
                }
                size++;
            }

        void insertAtIdx(int idx,int data){
            if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
            else if(idx==0) insertAtHead(data);
            else if(idx==size) insertAtTail(data);
            else {
            node * temp = new node(data);
            node * ptr = head;
                for(int i=1;i<=idx-1;i++){
                    ptr=ptr->next;
                }
                temp->next=ptr->next;
                ptr->next=temp;
                temp->prev=ptr;
                temp->next->prev=temp;
                size++;
        }
    }
        void display(){
            node * ptr = head;
            while(ptr!=NULL){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
            cout<<endl;
        }

    };

    int main() {

        DLL list;
        list.insertAtTail(10);
        list.insertAtTail(20);
        list.insertAtTail(30);
        list.insertAtTail(40);
        list.display();
        list.insertAtHead(5);
        list.insertAtHead(4);
        list.insertAtHead(3);
        list.insertAtHead(2);
        list.display();
        list.insertAtIdx(3,100);
        list.insertAtIdx(4,100);
        list.insertAtIdx(5,100);
        list.display();


    }