#include <iostream>
#include <vector>
using namespace std;

int cs(int n){
    if(n<=2) return n;

    int p1 = 1;
    int p2 = 2;
    for(int i=3;i<=n;i++){
        int p3=p1+p2;
        p1=p2;
        p2=p3;
        
    }
    return p2;
}

int main(){
    int n = 6;
    cout<<cs(n);
}