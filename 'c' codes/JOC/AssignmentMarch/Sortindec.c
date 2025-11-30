#include <stdio.h>
int main(){

  int arr[5]={3,2,5,1,4}; 
  int n=5;
  int temp;

printf("Given array: ");

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");

  for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){

            if(arr[j]<arr[j+1]){
                
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

          }
       }
   }
   
printf("Given array arranged in deceanding order: ");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}


    return 0;
}