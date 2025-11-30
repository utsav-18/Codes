#include <iostream>
    using namespace std;

    int fibo(int x){

        if(x<=1) {return x;}

       else {return fibo(x-1) + fibo (x-2);}

}

int main(){

int a;cout<<"Enter a:";cin>>a;

cout<<fibo(a);

}

//time complexity = O (2^n);