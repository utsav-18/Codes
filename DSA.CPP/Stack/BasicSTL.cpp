#include<iostream>
#include <stack>
using namespace std;
    int main() {
        
        stack <int> st;
        stack <int> temp;
        cout<<"Size: "<<st.size()<<endl;
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        cout<<"Size: "<<st.size()<<endl;
        cout<<"Top: "<<st.top()<<endl;
        st.pop();
        cout<<"Top: "<<st.top()<<endl;
        cout<<"Size: "<<st.size()<<endl;

        // cout<<"Printing the values of stack: "<<endl;
        // while(st.size()>0){
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }
        // cout<<endl;

        cout<<"Top: "<<st.top()<<endl;

        cout<<"Printing the values of stack and storing the values in extra stack 'Temp' in a reverse order: "<<endl;
        while(st.size()>0){
            cout<<st.top()<<" ";
            int x = st.top();
            st.pop();
            temp.push(x);
        }
        cout<<endl;

        /*Again doing the same thing for retriving the st's data*/
        cout<<"Order of retriving data: "<<endl;
        while(temp.size()>0){
            cout<<temp.top()<<" ";
            st.push(temp.top());
            temp.pop();
        }cout<<endl;

   cout<<"Top of st: "<<st.top()<<endl;

    }