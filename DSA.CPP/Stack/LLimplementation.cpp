#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class stack{
    public:
    node * head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    
void push(int data){
    node * temp = new node(data);
    temp->next = head;
    head = temp;
    size++;
}

void pop(){
    if(head==NULL){
        cout<<"Stack is Empty!!";
        return;
    }
    head=head->next;
    size--;
}

int top(){
        if(head==NULL){
            cout<<"Stack is Empty!!";
            return -1;
        }
        return head->data;
    }

// printing recursively;

void print(node * temp){
    if(temp==NULL) return;
        print(temp->next);
        cout<<temp->data<<" ";
}

void display(){
    node * ptr = head;
   print(ptr);
   cout<<endl;
 }

};

int main(){
    stack st;
    cout<<st.top()<<endl;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.display();
}