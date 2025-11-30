//2^4 == 2*2*2*2 = 16

#include <iostream>
using namespace std;
    int main () {

    int a;
    cout<<"Enter a:";
    cin>>a;

        int b;
    cout<<"Enter b:";
    cin>>b;

    int pow=1;

    for(int i=1;i<=b;i++){

           pow=pow*a;  

    }

    cout<<pow;

    }

