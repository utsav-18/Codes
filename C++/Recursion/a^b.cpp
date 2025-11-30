#include <iostream>
using namespace std;

int p(int x,int y){
    if(y==1) return x;
    return x*p(x,y-1);
}

int main() {
    int a,b;
    cout<<"Enter a num:";cin>>a;
    cout<<"Enter its power:";cin>>b;
    cout<<a<<"^"<<b<<"="<<p(a,b);

}