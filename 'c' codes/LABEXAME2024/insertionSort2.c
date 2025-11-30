#include <stdio.h>

    void insertionSrot(int arr[],int s){
            for(int i=1;i<s;i++){
                int j=i;
                while(j>=1 && arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    j--;
                }
            }
    }

    void display(int arr[],int s){
        for(int i=0;i<s;i++){
            printf("%d ",arr[i]);
        }
    }

    int main(){
        int arr[]={4,5,1,2,3,6};
        int s = sizeof(arr)/sizeof(arr[0]);
        display(arr,s);
        insertionSrot(arr,s);
        printf("\n");
        display(arr,s);
    }