#include<iostream>
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
    int size;
    node *head;
    stack(){
        head=NULL;
        size=0;
    }
        void push(int data){
            node * ptr = new node(data);
            size++;
            ptr->next=head;
            head=ptr;
        }
        void pop(){
            if(head==NULL){
                cout<<"Empty";
            }
            head=head->next;
            size--;
        }

        int top(){
            if(size==0){
                cout<<"Stack is empty!!";
                return -1;
            }
            return head->data;
        }

        void display(){
            node * tmp = head;
            while(tmp!=NULL){
                cout<<tmp->data<<" ";
                tmp=tmp->next;
            }
            cout<<endl;
        }

};



int main(){
    stack st;
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);

    st.display();

    st.pop();
    st.pop();

    st.display();


}