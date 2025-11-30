//Perfect code; 1 1 2 3 5 8 13 21 34 55 

#include <iostream>
using namespace std;
    int main () {

    int n;
    cout<<"Enter n:";
    cin>>n;

            int a=0,b=0,c=1;

    for(int i=1;i<=n;i++){

         cout<<c<<" ";

          a=b;

          b=c;

            c=a+b;


            }

                 

    }