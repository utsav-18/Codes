#include <iostream>
using namespace std;

int main() {

int n=5;

for(int i=1;i<=n;i++){

    for(int j=n-i;j>0;j--){

        cout<<" ";

    }

    for(int k=1;k<=i;k++){
        
        cout<<k;

    }
       
    for(int l=i-1;l>0;l--){
        
        cout<<l;
        
    }

cout<<"\n";

}

    }



