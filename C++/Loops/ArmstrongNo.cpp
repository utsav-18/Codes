#include <iostream>
using namespace std;
    int main () {

            int n,ld,sum=0;
           
            cout<<"Enter a number:";
            cin>>n;
             int o=n;
             
        while(n>0){

            ld=n%10;
            sum=sum+(ld*ld*ld);
            n=n/10;


        }
           if(o==sum) cout<<"It is a armstrong num :"<<sum;
            else cout<<"It is not a armstrong num :"<<sum;
    }