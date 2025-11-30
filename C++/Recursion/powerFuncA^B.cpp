#include <iostream>
using namespace std;

int p(int x,int y){
if(y==1) return x;

int ans=p(x,y/2);

if(y%2==0) {
return ans*ans;
}
else {
return ans*ans*x;
}

}

int main() {
int a,b;
cout<<"Entre a num: ";cin>>a;
cout<<"Enter exponetial: ";cin>>b;
cout<<a<<"^"<<b<<"="<<p(a,b);
}