#include <iostream>
    using namespace std;

    int gcd(int a, int b){

      int hcf=1;  

        for(int i=1;i<=min(a,b);i++){    

            

            if(a%i==0 && b%i==0) 

            hcf=i;
            
      
        }

        return hcf;

    }

        int main () {

int a,b;
cout<<"Enter 1st num:";
cin>>a;
cout<<"Enter 2nd num:";
cin>>b;

cout<<"GCD: "<<gcd(a,b);

        }