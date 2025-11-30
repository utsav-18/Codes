#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    //push
    //pop
    //frony -> top
    //size, empty
    //back 

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

        cout<<"Front: "<<q.front()<<endl;
        cout<<"Rear: "<<q.back()<<endl;
        cout<<"Size: "<<q.size()<<endl;

        q.pop();

        cout<<"Front: "<<q.front()<<endl;
        cout<<"Rear: "<<q.back()<<endl;
        cout<<"Size: "<<q.size()<<endl;

}