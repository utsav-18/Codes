#include <iostream>
using namespace std;
    int main () {

        int n,re=0;
        cout<<"Enter a num:";
        cin>>n;
        int o=n;

        while(n>0){
            re=re*10+(n%10);
            n/=10;

        }

          if(re==o)  cout<<"Yes it is a Palindrome: "<<re;
            else cout<<"Not a Palindrome: "<<re;

    }