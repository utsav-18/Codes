#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// void array(int arr[],int i,int m){
//     if(i<0){
//         cout<<m;
//         return;
//     }  
//     if(m<arr[i]){m=arr[i];}
//     array(arr,i-1,m);
// }
// int main(){
//     int arr[5]={8,9,5,0,6};
//     int s=5;
//     int max = INT_MIN;
//    array(arr,s-1,max);
// }

int maxInArray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[]={2,1,6,31,9,0,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxInArray(arr,n,0);
}