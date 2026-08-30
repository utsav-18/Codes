#include <iostream>
    using namespace std;

    long fact(long a) {

        if(a>1){
            return (a*fact(a-1));
        }

    }
        int main () {

         long  a=10;

        cout<<fact(a);

        }