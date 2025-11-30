#include <iostream>
using namespace std;
  
    int main() {
        int arr[]={4,5,3,2,1,6};
        int N = sizeof(arr)/sizeof(arr[0]);

        cout<<"Unsorted: ";
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        } 

        int i=0;
        while(i<N){
            int correctIdx = arr[i]-1;
            if(i==correctIdx) i++;
            else swap(arr[i],arr[correctIdx]);
        }

        cout<<"\nSorted: ";
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        } 


    }