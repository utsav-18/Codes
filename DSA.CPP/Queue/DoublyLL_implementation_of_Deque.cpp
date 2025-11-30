#include <iostream>

// #include <deque>
// using namespace std;


// int main(){
//     deque<int> dq;
//         dq.push_back(10);
//         dq.push_back(20);
//         dq.push_back(30);
//         dq.push_back(40);
//         cout<<"Front: "<<dq.front()<<endl;
//         cout<<"Back: "<<dq.back()<<endl;
//         dq.pop_back();
//         dq.pop_front();
//         dq.push_front(50);
//         dq.push_front(60);
//         cout<<"Front: "<<dq.front()<<endl;
//         cout<<"Back: "<<dq.back()<<endl;
// }

using namespace std;
class node{
public:
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

class deque{
public:
    node* head;
    node* tail;
    int size;
    deque(){ 
        head = tail = NULL;
        size = 0;
    }

    void push_Back(int data){
        node * temp = new node(data);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void push_Front(int data){
        node * temp = new node(data);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void pop_Front(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        size--;
    }

    void pop_Back(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        else if(size==1){
            pop_Front();
            return;
        }
        node * temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    int front(){
        if(size==0){
            cout<<"Queue is Empty!!";
            return -1;
        }
        return head->data;
    }
    int back(){
        if(size==0){
            cout<<"Queue is Empty!!";
            return -1;
        }
        return tail->data;
    }
    int size_of_Deque(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
    void display(){
        node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

    int main() {
        deque dq;
        dq.push_Back(10);
        dq.push_Back(20);
        dq.push_Back(30);
        dq.push_Back(40);

        cout<<"Dequeu: ";dq.display();
        cout<<"Front: "<<dq.front()<<endl;
        cout<<"Back: "<<dq.back()<<endl;

        dq.pop_Back();
        cout<<"Dequeu: ";dq.display();
        dq.pop_Front();
        cout<<"Dequeu: ";dq.display();

        dq.push_Front(50);
        dq.push_Front(60);
        cout<<"Dequeu: ";dq.display();
        cout<<"Front: "<<dq.front()<<endl;
        cout<<"Back: "<<dq.back()<<endl;

    }