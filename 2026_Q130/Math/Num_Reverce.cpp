#include <iostream>
using namespace std;

int numRev(int x){
    int originl = x ;
    long long rev = 0;

    while(x>0){
        rev = rev * 10 + (x%10);
        x /= 10;
    }

    return rev;
}

int main(){
    int n = 123;
    cout<<numRev(n);
}