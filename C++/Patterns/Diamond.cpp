#include <iostream>
using namespace std;

int main() {

int n=8;




for(int i=1;i<=n-1;i++){

    for(int j=n-i;j>=0;j--){

        cout<<" ";

    }

    for(int k=1;k<=i*2-1;k++){
        
        cout<<"*";

    }

 cout<<"\n";


}

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


