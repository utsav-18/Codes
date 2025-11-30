#include <iostream>
using namespace std;
    int main () {

        int r=10;

        //part 1;

        for(int i=1;i<=r;i++){
            for(int j=(r-i)-1;j>=0;j--){
                 cout<<" ";
            }
                cout<<"*";

                for(int k=1;k<(i*2)-2;k++){
                    cout<<" ";

                }

               if(i>1) cout<<"*";
                cout<<"\n";
         }


         //part 2;


        for(int i=1;i<r;i++){
            
            for(int j=1;j<=i;j++){
               cout<<" ";
             }

            cout<<"*";

        for(int j=(r-i)*2-4;j>=0;j--){
            cout<<" ";

          }

           if(i<r-1) cout<<"*";
            cout<<"\n";
        }

    }