#include <iostream>
using namespace std;

void rotateArr1(int arr[], int n, int d) {
    if(n==0) return;
        d=d%n;
    if(n==0) return;
    
        for (int i=0;i<d;i++){
            int idx1=n-i-1;
                for(int j=i+1;j<n;j++){
                    int idx2=n-j-1;
                        int t=arr[idx1];
                        arr[idx1]=arr[idx2];
                        arr[idx2]=t;
                }
        }
        
        for (int i=0;i<d;i++){
            int idx1=n-i-1;
                for(int j=i+1;j<d;j++){
                    int idx2=n-j-1;
                        int t=arr[idx1];
                        arr[idx1]=arr[idx2];
                        arr[idx2]=t;
                }
        }
    
}

void myReverse(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int n, int d) {
if(n==0) return ;
d=d%n;
if(d==0) return ;

    myReverse(arr,0,d-1);
     myReverse(arr,d,n-1);
      myReverse(arr,0,n-1);
    
}

int main(){
    int arr[]={2, 4 ,6 ,8, 10 ,12 ,14, 16 ,18, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=3;
    d=d%n;
    rotateArr(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}