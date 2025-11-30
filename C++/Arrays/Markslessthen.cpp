#include <iostream>
using namespace std;
    int main () {

        int m[10]={45,65,85,87,88,32,21,5,90,0};

        cout<<"Roll: ";

        for(int i=0;i<10;i++){
            if(m[i]<35) cout<<i+1<<" ";

        }
        cout<<"is failed.";

    }