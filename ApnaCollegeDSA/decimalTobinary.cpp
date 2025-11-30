#include <iostream>
using namespace std;

int decToBin(int num){
    int ans=0, pow=1;
    while(num>0){
        int rem = num%2;
        num=num/2;
        ans += (rem*pow);
        pow=pow*10;

    }
    return ans;
}

int main(){
    // int n;
    // cout<<"Enter num: ";
    // cin>>n;
    // cout<<decToBin(n);
    for(int i=0;i<=100;i++){
            cout<<i<<": "<<decToBin(i)<<endl;
    }
}
