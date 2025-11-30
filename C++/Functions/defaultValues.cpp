#include <iostream>
using namespace std;
    

        void  fun(int x=1,int y=2) {  // without giving values it will not work;  // it is called default values; 

            cout<<x<<" "<<y;
            
        }

        int main() {

            fun() ;

            cout<<endl;


            fun(4,6); //guess what it will give;

            cout<<endl;

            fun(4); //guess what it will give;


        }

    