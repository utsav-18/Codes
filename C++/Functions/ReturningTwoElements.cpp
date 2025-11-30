#include <iostream>
    using namespace std;
        
        int maxthree(int x,int y,int z){

            if(x>y && x>z ) return x;
            else  if(y>x && y>z) return y;
             else return z;

        }
        
        int main () {

            int a=8,b=10,c=7;
            cout<<maxthree(a,b,c);


        }