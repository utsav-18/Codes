// using bubble sort;


#include <stdio.h>
int main() {

int arr[5]={5,1,3,4,8};
int n=5,temp;
int k;
printf("Enter k:");
scanf("%d",&k);

for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1-i;j++){

         if(arr[j+1]<arr[j]){

             temp = arr[j];
             arr[j]=arr[j+1];
             arr[j+1]= temp;

         }

    }
}


printf("\n");

printf("%d th smallest element is: %d",k,arr[k-1]);

    return 0;

}