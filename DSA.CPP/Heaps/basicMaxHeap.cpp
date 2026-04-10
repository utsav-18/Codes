#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(100);
    pq.push(200);
    pq.push(-600);
    pq.push(800);

    cout<<pq.top();cout<<endl;
    pq.pop();
    cout<<pq.top();
    
}   