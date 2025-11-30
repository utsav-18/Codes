#include <iostream>
using namespace std;

 //my method;
    int gcd(int x,int y,int min){
        if(min==0) return 1;
        if(x%min==0 && y%min==0) {
            return min;
        }
        else {
            gcd(x,y,min-1);
        }
    }

// Sir's Method; better time complexity; 
    int hcf(int a,int b){
        if(a==0){return b;}
        else{return hcf(b%a,a);}
    }

int main(){
    int a,b;
    cout<<"Enter a:";cin>>a;
    cout<<"Enter b: ";cin>>b;

    //general method;

    // for(int i=24;i>0;i--){
    //     if(a%i==0 && b%i==0) {
    //     cout<<i<<" ";
    //     break;
    //     }
    // }

  cout<<gcd(a,b,min(a,b))<<endl;
  cout<<hcf(min(a,b),max(a,b));

}