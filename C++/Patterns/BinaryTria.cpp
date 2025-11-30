#include <iostream>
using namespace std;

// 1 0 1 0 1 0 
// 0 1 0 1 0 1 
// 1 0 1 0 1 0
// 0 1 0 1 0 1


int main() {

int a=1;

for(int i=1;i<=8;i++){

    if(i%2!=0) a=1;
    else a=0;


    for(int j=1;j<=i;j++){



 cout<<a<<" ";

    if(a==1) a=0;
    // else a=1;
    else if(a==0) a=1;


    }

 cout<<"\n";


}


}



