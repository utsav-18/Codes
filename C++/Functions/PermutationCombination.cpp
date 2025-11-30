#include <iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f; 
}

    int main () {

int n;cout<<"Entre n:";cin>>n;
int r;cout<<"Entre r:";cin>>r;

int ncr =  fact(n) / (fact(r)*fact(n-r));
int npr =  fact(n) / fact(n-r);


cout<<"nCr: "<<ncr<<endl;
cout<<"nPr: "<<npr;



    }