#include <stdio.h>
    int main(){
int j,i;
    int arr[5]={1,2,3,4,5},brr[5];

    for(i=0,j=4;i<5;i++,j--){
        brr[j]=arr[i];
    }
    
for(int i=0;i<5;i++){
    printf("%d ",brr[i]);
}

    return 0;
}