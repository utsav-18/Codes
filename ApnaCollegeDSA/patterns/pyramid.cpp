#include <iostream>
using namespace std;
void mine(int n){
        for (int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int k=2;k<=i*2;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n=5;
    // mine(n);

    for(int i=0;i<n;i++){
        //spcases = n-i-1;
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //nums1 = i+1;
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        //nums2 
        for (int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }

}