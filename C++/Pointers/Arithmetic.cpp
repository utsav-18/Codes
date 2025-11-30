#include <iostream>
    using namespace std;
        int main () {

           int x=4;
            
           int *p = &x;

         cout<<*p<<endl;;
         
         *p=*p+1;  //*p=*p+1 == (*p)++  !! ya ya ya. 
                  // *p=*p+1 != *p++;   !! Nooooooo. 
                       
         cout<<*p<<endl;

         cout<<p<<endl;

            p=p+1;  // address will be forwarded 4 bytes cause +1 in int;

         cout<<p<<endl;




        }