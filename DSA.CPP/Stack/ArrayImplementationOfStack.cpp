#include <iostream>
using namespace std;

class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        idx=-1;
    }
    void push(int data){
        idx++;
        arr[idx]=data;
    }

    void pop(){
        if(idx==-1)cout<<"Stack is Empty!";
        cout<<"Element Poped: "<<arr[idx]<<endl;
        idx--; 
    }

    int top(){
        if(idx==-1) cout<<"Satck is Empty!";
        return arr[idx];
    }

    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

    int main(){
        stack st;
        st.push(10);
         st.push(20);
          st.push(30);
           st.push(40);
            cout<<"Top: "<<st.top()<<endl;
            cout<<"Size: "<<st.size()<<endl;
            st.pop();
            cout<<"Size: "<<st.size()<<endl;
            cout<<"Top: "<<st.top()<<endl;
            st.display();

    }