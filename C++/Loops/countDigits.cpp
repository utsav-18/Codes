#include <iostream>
using namespace std;
    int main () {

int n,c=0;
cout<<"Enter a num:";
cin>>n;

while(n>0){
    
    n=n/10;
    c++;

}

cout<<"Numbers of digits are: "<<c;


    }