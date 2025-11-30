#include <iostream>
using namespace std;
    int main (){

        int arr[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
        int brr[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    cout<<"Mat 1: \n";

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }
    cout<<"\nMat 2: \n";

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<brr[i][j]<<" ";

            }
            cout<<endl;
        }



        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                brr[i][j]=arr[i][j]+brr[i][j];

            }
        }

    cout<<"\nMat 1 + Mat 2 = \n";

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
               cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }


    }