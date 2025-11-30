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
class queue{
    public:
    node * head;
    node * tail;
    int size;
    queue(){
        head = tail = NULL;
        size = 0;
    }
    void push(int data){
        node * temp = new node(data);
        if(size==0) {
            head = tail = temp;
        }
        else{
            tail->next=temp;
        tail=temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is Empty!!";
            return;
        }
        else{
            head=head->next;
            size--;
        }
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

    void display(){
        node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    int sizeOfqueue(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }

};


    int main(){
        queue q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        cout<<"Front: "<<q.front()<<endl;
        cout<<"Back: "<<q.back()<<endl;
        cout<<"sizeOfqueue: "<<q.sizeOfqueue()<<endl;

        q.display();
        q.pop();
        q.pop();

        q.display();
        q.push(6);
        q.push(7);

        q.display();
        q.pop();
        q.pop();

        q.display();
        cout<<"Front: "<<q.front()<<endl;
        cout<<"Back: "<<q.back()<<endl;
        cout<<"sizeOfqueue: "<<q.sizeOfqueue()<<endl;

    }