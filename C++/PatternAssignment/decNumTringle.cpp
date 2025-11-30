#include <iostream>
    using namespace std;
        int main () {

                int r=5,a=1,j;

            for(int i=1;i<=r;i++){
                
                    
                    for(j=1;j<=i;j++){

                        
                   if(j>1) a--;

                     cout<<a;

                      

                    }

                    if(i>1) a+=i;
                    else a++;

                    cout<<endl;

            }

        }
