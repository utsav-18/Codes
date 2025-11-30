#include <stdio.h>
    int main(){

    int arr[10]={12,8,45,8,5,56,87,12,20};
    int temp;

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

        return 0;
    }