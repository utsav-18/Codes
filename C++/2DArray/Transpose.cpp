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

        int brr[b][a];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"\n";

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            brr[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }




    }