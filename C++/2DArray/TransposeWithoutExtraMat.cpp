//Better space complexity;
//need correction**

#include <iostream>
using namespace std;
    int main (){

                int a,b;
        cout<<"Enter row: ";cin>>a;
        cout<<"Entre column: ";cin>>b;

        int arr[a][b];

        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<"Entre element "<<i<<","<<j<<":";
                cin>>arr[i][j];

            }
        }
        cout<<"Original: \n";

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";

        for(int i=0;i<a;i++){
            for(int j=i+1;j<b;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }cout<<"Transpose: \n";

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
}