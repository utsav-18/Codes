#include <iostream>
    using namespace std;
        int main () {

            int r=4,i,j,k,a;

            for( i=1;i<=r;i++){

                for( j=r-i;j>0;j--){
                    cout<<" ";

                }

                for(a=65, k=1;k<=i;k++,a++){
                    cout<<(char)a;

                }

                
                cout<<endl;

            }

        }