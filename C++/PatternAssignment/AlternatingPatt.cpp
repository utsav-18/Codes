#include <iostream>
    using namespace std;
        int main () {

            int j,i,r=4;
            char a;

            for( i=1;i<=r+1;i++){
                    for(a='A', j=1;j<=i;j++,a++){

                        if(i%2!=0) cout<<j;
                         else cout<<a;
                         

                    }

                cout<<endl;

            }

        }