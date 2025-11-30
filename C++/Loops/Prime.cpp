// use of break statement;

#include <iostream>
using namespace std;

    int main () {

        int n;
        cout<<"Enter a number:";
        cin>>n;

        bool flag = true;  // true means prime;

            for(int i=2;i<n;i++){

                if(n%i==0) flag = false;
                
                 break;
            }

            if(flag == true) cout<<n<<" is prime";

            else cout<<n<<" is not prime";

    }