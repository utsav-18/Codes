#include <iostream>
    using namespace std;


    void greet(int a){

        if(a==0) return;
        
        cout<<"*";

        greet(a-1);


    }

    int main () {

        greet(5);


    }