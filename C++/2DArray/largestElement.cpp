#include <iostream>
#include <climits>

using namespace std;
    int main (){

        int arr[4][4]={{1,2,3,4},{5,6,8,9},{4,2,5,6},{7,4,1,0}};

        int max=INT_MIN;
        int min=INT_MAX;
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(arr[i][j]>max) max=arr[i][j];
                if(arr[i][j]<min) min=arr[i][j];

            }
        }

        cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;

    }