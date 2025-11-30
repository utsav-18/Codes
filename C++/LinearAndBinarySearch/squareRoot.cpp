#include <iostream>
#include <cmath>
using namespace std;
int main() {
     int n;cout<<"Enter n: ";cin>>n;
        // for(int i=1;i<n;i++){
        //     if(i*i==n){
        //         cout<<i;
        //     }
        // }
    int lo=0;
    int hi=n;
    while(lo<=hi){
    int mid=lo+ (hi-lo)/2;
        if(mid*mid==n) {
            cout<<mid<<" ";
            break;
        }
        else if(mid*mid>n) hi=mid-1;
        else lo=mid+1;  
    }
    ///cout<<sqrt(n);
}