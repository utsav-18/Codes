#include <iostream>
using namespace std;
    int main() {
int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){

    for(int k=i;k<5;k++){

        for(int j=i;j<=k;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }

}

}