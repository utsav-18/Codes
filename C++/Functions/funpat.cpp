#include <iostream>

void pat(int n){

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        std::cout<<"*";
    }
    std::cout<<"\n";
}

}


    int main () {

        int a=5,b=6,c=7;

        pat(a);
        pat(b);
        pat(c);


    }