#include <iostream>
#include <stack>
using namespace std;

    int main(){

        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);

        stack<int> gt;

    cout<<"For Storing the elements from st to gt in reverce order: "<<endl;
        while(st.size()>0){
            cout<<st.top()<<" ";
            gt.push(st.top());
            st.pop();
        }cout<<endl;

        stack<int> rt;

    cout<<"For Storing the elements from gt to rt in original  order: "<<endl;
        while(gt.size()>0){
            cout<<gt.top()<<" ";
            rt.push(gt.top());
            gt.pop();
        }cout<<endl;

    cout<<"For Storing the elements from rt to st in reverce order: "<<endl;
        while(rt.size()>0){
            cout<<rt.top()<<" ";
            st.push(rt.top());
            rt.pop();
        }
        
    }