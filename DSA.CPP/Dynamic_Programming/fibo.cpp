#include <iostream>
#include <vector>
using namespace std;

// int fibonacci(int n){
//     if(n<=1) return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

int fibonacci(int n,vector<int>&v){
    if(n<=1) return n;
    if(v[n]!=-1) return v[n];
    return v[n] = fibonacci(n-1,v) + fibonacci(n-2,v);
}

int main(){
    int n = 6;
     vector<int> v(n+1,-1);
    cout<<fibonacci(n,v);
}