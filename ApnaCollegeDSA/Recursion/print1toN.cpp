#include <iostream>
using namespace std;

void p1(int n){
    if(n==0) return;
    cout << n << " ";
    p1(n-1);
}

void p2(int x,int y){
    if(y > x) return;
    cout << y << " ";
    p2(x, y+1);
}

int main(){
    int n = 5;

    p1(n);     
    cout << endl;
    p2(n, 1);  
}
