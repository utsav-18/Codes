#include <iostream>
using namespace std;

void myWay(int arr[] , int target, int size){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target) cout<<arr[i]<<" + "<<arr[j]<<" = "<<target;
            else if(arr[i]+arr[j]>target) break;
        }
    }

}

void bestWay(int arr[] , int target, int size){
    int i=0;
    int j=size-1;
    while(i<j){
         if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
       else {
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<target;
                return;
       }
    }
}

int main(){
    int arr[]={2,7,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    // myWay(arr,target,size);

    bestWay(arr,target,size);


}