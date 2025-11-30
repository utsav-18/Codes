#include <iostream>
using namespace std;

    int main () {

            int n,f=1;
            cout<<"Enter a num:";
            cin>>n;

            for(int i=1;i<=n;i++){

                    f=f*i;
        
            }

            cout<<"Fctorial of "<<n<<" is :"<<f;

    }
