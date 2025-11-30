#include <iostream>
using namespace std;
    int main (){

        int arr[4][4]={{1,2,3,4},{5,6,8,9},{4,2,5,6},{7,4,1,0}};
        int sum=0;
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
            
            sum+=arr[i][j];

            }
        }

        cout<<"Sum: "<<sum;

    }