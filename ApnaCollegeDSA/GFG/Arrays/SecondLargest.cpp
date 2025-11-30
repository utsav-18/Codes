#include <iostream>
#include <climits>
using namespace std;

int getSecondLargest(int *arr, int n) {
    int max=INT_MIN;
    int secmax=INT_MIN;

    int idx1;

        for (int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                idx1=i;
            }
        }
        for (int i=0;i<n;i++){
            if(i==idx1 || arr[i]==max) {continue;}    
            else if(arr[i]>secmax){
                    secmax=arr[i];
                }
        }
    
        return secmax;
    }


int main(){
    int arr[]={10,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<getSecondLargest(arr,size);

}