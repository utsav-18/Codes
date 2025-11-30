//Not proper : 

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

class DLL {
public:
    Node *head;
    Node *tail;
    int size;
    
    DLL() {
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

    void insertAtTail(int data) {
        Node *temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev= tail; // new
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int data) {
        Node *temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev=temp; // new
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
            insertAtHead(data);
        } else if (idx == size) {
            insertAtTail(data);
        } else {
            Node * t = new Node(data);
            Node * temp = head;
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                } 
                t->next=temp->next;
                temp->next=t;
                t->prev=temp;
                t->next->prev=t;
                size++;
        }
    }

    void deleteHead(){
       if(size>=1){
        head=head->next;
        head->prev=NULL;
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
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next->next->prev=temp;
            temp->next=temp->next->next;   
            size--;
        }

            void rev(){
                Node *ptr = tail;
                cout<<"Reversed List: ";
                while(1){
                    cout<<tail->data<<" ";
                    tail=tail->prev;
                    if(tail->next->prev==NULL) break;
                }
                cout<<endl;
            }

    // void get(int idx) {
    //     Node *ptr = head;
    //     for (int i = 0; i < idx; i++) {
    //         ptr = ptr->next;
    //     }
    //     cout<<ptr->data<<endl;
    // }
};

int main() {
    DLL list;

    // Insert initial elements
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(4);
    list.insertAtTail(5);

    // Display the list
    cout << "Original list: ";
    list.display();

   // Insert at a specific index
    list.insertAtIdx(2, 100);
    list.deleteHead();
    cout << "Modified list: ";
   list.display();
    list.deleteAtIdx(3);
    //Display the modified list
    cout << "Modified list: ";
    list.display();
    list.rev();


    return 0;
}