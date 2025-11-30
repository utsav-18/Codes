#include <iostream>
    using namespace std;

    int main ()

    {
        
            int r=5;

            for ( int i=1;i<=r; i++)
            {
                for(int j=1;j<=i;j++){
                   
                   if(j<i) cout<<" ";
                   else cout<<"*";

                }

                for(int k=(r-i)*2;k>0;k--){
                    cout<<" ";
                }


                    cout<<"*";  //for right part;


                cout<<"\n";

            }
        

    } //ned correction

    