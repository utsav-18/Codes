#include<iostream>
#include<climits>
using namespace std;

int reverse1(int a[],int size,int ans[]){
    for(int i=0;i<size;i++){
        ans[i]=a[size-i-1];
    }
}

int reverse2(int a[],int size){
    for(int i=0;i<size/2;i++){
        swap(a[i],a[size-i-1]);
    }
}

int LinearSearch(int a[],int size,int target){
    for (int i=0;i<size;i++){
        if(a[i]==target) return i;
    }
}

int maximum(int a[],int size){
    int max = INT_MIN;
        for (int i=0;i<size;i++){
            if(a[i]>max) max = a[i];
        }
        return max;
}

int minimum(int a[],int size){
    int min = INT_MAX;
        for (int i=0;i<size;i++){
            if(a[i]<min) min = a[i];
        }
        return min;
}

int main(){
    int a[]={7,1,9,1,4,1,23,6,5};
    int size = sizeof(a)/sizeof(a[0]);
        // int ma = maximum(a,size);
        // int mi = minimum(a,size);

        // int target = 5;
        // cout<<LinearSearch(a,size,target);

        // int ans[size];
        // reverse1(a,size,ans);
        // for(int i=0;i<size;i++){
        //     cout<<ans[i]<<" ";
        // }cout<<endl;
        // reverse2(a,size);
        // for(int i=0;i<size;i++){
        //     cout<<a[i]<<" ";
        // }
}