#include<stdio.h>

void bubbleSort(int arr[],int s){
    int temp=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void display(int arr[],int s){
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]= {5,4,8,7,9,0,6,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    display(arr,s);
    bubbleSort(arr,s);
    display(arr,s);
}