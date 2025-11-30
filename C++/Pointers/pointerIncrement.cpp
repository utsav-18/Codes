#include <iostream>
using namespace std;
    int main () {

        int a=15;
        int *ptr=&a;
         int b= ++*ptr;  //++(*ptr)

        cout<<a<<" "<<b;


        // int a=15;
        // int *ptr=&a;
        // int b= (*ptr)++;   post increment.

        // cout<<a<<" "<<b;   => ??

    }