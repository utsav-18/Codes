#include <iostream>
using namespace std;

int main() {

int n=10;


for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){

        cout<<" ";

    }

    for(int k=(n-i)*2;k>=0;k--){
        
        cout<<"*";

    }

 cout<<"\n";


}


}



