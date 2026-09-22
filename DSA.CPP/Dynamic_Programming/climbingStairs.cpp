#include <iostream>
#include <vector>
using namespace std;

int cs(int n){
    vector<int>v(n+1);
    v[0]=0;
    v[1]=1;
    for(int i=2;i<=n;i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];

}

int main(){
    int n = 6;
    cout<<cs(n);
}