#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
queue<int>reverce(queue<int>q){
    stack<int>st;
    int n=q.size();
    for(int i=1;i<=n;i++){
        st.push(q.front());
        q.pop();
    }
    queue<int>ans;

    for(int i=1;i<=n;i++){
        ans.push(st.top());
        st.pop();
    }

    return ans;
}
    int main(){
        queue<int>q;
        stack<int>st;

        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        display(q);

        queue<int>revercedQueue;
        revercedQueue=reverce(q);

        display(revercedQueue);

    }