#include<iostream>
using namespace std;
    

 int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f; 
 }

int ncr(int n,int r){

    int nCr=fact(n)/(fact(r)*fact(n-r));
    return nCr;

}

    
    int main () {

int r=5;

    for(int i=0;i<r;i++){
        
        for(int o=r-i;o>0;o--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<"\n";
    }



}