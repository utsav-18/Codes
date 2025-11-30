/* Q3. Implement a Linked List class.
The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
functions. */
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node *head;
    Node *tail;
    int size;
    
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void display() {
        Node *ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void insertAtEnd(int data) {
        Node *temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtStart(int data) {
        Node *temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int data) {
        if (idx < 0 || idx > size) {
            cout << "Index out of bounds" << endl;
            return;
        }
        if (idx == 0) {
            insertAtStart(data);
        } else if (idx == size) {
            insertAtEnd(data);
        } else {
            Node *temp = new Node(data);
            Node *ptr = head;
            for (int i = 0; i < idx - 1; i++) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            size++;
        }
    }

    void deleteHead(){
       if(size>=1){
        head=head->next;
        size--;
       }
    }

        void deleteTail(){
            if(size==0) {cout<<"List is Empty!";return;}
            Node *temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }

        void deleteAtIdx(int idx){
            Node *temp = head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }

    void get(int idx) {
        Node *ptr = head;
        for (int i = 0; i < idx; i++) {
            ptr = ptr->next;
        }
        cout<<ptr->data<<endl;
    }

};

            
            int main() {
                LinkedList ll;
                ll.insertAtStart(2);
                ll.insertAtStart(1);
                ll.insertAtStart(0);
                ll.insertAtEnd(3);
                ll.insertAtEnd(4);
                ll.insertAtEnd(5);
                ll.insertAtIdx(3,100);
                ll.display();
                ll.deleteHead();
                ll.deleteHead();
                ll.deleteTail();
                ll.display();
                ll.deleteAtIdx(2);
                ll.display();
                ll.get(2);
                

            }