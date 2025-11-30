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

        int a=4,b=5,c=6;

        pat(a);
        pat(b);
        pat(c);


    }