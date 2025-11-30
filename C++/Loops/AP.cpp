
/*
AP = 1,3,5,7,9,11,13,15,17,19

a=1,d=2
an=a+(n-1)d
an=1+(n-1).2
1+2n-2 = 2n-1 

*/

#include <iostream>
using namespace std;

    int main () {

    int n ;
    cout<<"Enter n :";
    cin>>n;

    // int an=2*n-1;

    // cout<<n<<"th tearm is :"<<an;

        // for(int i=1;i<=2*n-1;i+=2){

        //             cout<<i<<endl;

        // }


 int a=1;

 for(int i=1;i<=n;i++){

        cout<<a<<endl;

        a+=2;


        }

    }