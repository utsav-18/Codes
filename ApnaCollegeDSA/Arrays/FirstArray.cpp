#include<iostream>
#include<climits>
using namespace std;

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
    int a[]={5,7,9,4,1,23,6,5,8,8,1,2};
    int size = sizeof(a)/sizeof(a[0]);
        cout<<"Max: "<<maximum(a,size)<<endl;
        cout<<"Min: "<<minimum(a,size);
}