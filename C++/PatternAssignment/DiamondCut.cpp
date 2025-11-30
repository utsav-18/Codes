#include<iostream>
using namespace std;
    int main () {

        int r=4;
for(int i=1;i<=r;i++){
    for(int j=r-i;j>=0;j--){
        cout<<"*";
    }
    for(int k=1;k<2*i-1;k++){
        cout<<" ";
    }
    for(int l=r-i;l>=0;l--){
        cout<<"*";
    }

    cout<<endl;
}

//lower part;

for(int i=1;i<=r;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int k=2*(r-i);k>0;k--){
        cout<<" ";
    }
    for(int l=1;l<=i;l++){
        cout<<"*";
    }

    cout<<endl;
}



    } // need correction