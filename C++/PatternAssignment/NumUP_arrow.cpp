#include <iostream>
using namespace std;
    int main () {

        int r=9;

        for(int i=1;i<=r;i++){
            for(int j=(r-i);j>=0;j--){
                /*if(j==0 )cout<<"*";
                else*/ cout<<" ";
            }
                cout<<i;

                for(int k=1;k<=(2*i)-3;k++){
                    cout<<" ";

                }

               if(i>1) cout<<i;
                cout<<"\n";
         }


    }