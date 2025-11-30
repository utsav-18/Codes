#include <iostream>
using namespace std;
int main () {

int a,b,c;
cout<<"Enter side 1:";
cin>>a;
cout<<"Enter side 2:";
cin>>b;
cout<<"Enter side 3:";
cin>>c;


if((a+b>c) && (b+c>a) && (c+a>b)){
    cout<<"They can be the sides of triangle";
}

else{
    cout<<"Invalid Triangle";
}


    return 0;
}