#include <iostream>
using namespace std;

    int main () {

        int r=10;
   
            //for first line of stars.           
        for(int d=1;d<=(r*2)-1;d++){
            cout<<"*";
        }


        cout<<"\n";

        for(int i=1;i<=r;i++){

                 for(int j=r-i;j>0;j--){
                    cout<<"*";

            }

                         for(int k=1;k<i*2;k++){
                            cout<<" ";
            }
           
                         for(int l=r-i;l>0;l--){
                            cout<<"*";
            }


            cout<<"\n";

        }

    }