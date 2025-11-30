#include <iostream>
using namespace std;
    int main () {

        int arr[5]={1,0,2,3,0};
        int lastOccurence=-1;
        int num;

        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){

                

                if(arr[i]==arr[j] && i!=j)  { 
                      lastOccurence=j;
                      num=arr[i];
                     }

            }
        }

       if(lastOccurence!=-1) cout<<"lastOccurence index of "<<num<<" is : "<<lastOccurence;

        else cout<<"Similer element not found.";

    }

