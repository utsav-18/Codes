#include <iostream>
    using namespace std;
        int main () {

           int x=4;

            int *p = &x;

         cout<<p<<"\n";

            p=p+1;  // address will be forwarded 4 bytes cause +1 in int;

         cout<<p;
            
        }