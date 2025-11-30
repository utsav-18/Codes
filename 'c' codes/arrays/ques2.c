#include <stdio.h>
 int main() {

 int arr[7]={1,2,3,4,5,6,7};
 int x,count=0;
 printf("Enter x:");
 scanf("%d",&x);


for(int i=0;i<7;i++){
 if(arr[i]>x) count++;
 printf("%d ",arr[i]);
 
}

printf("\ncount => %d ",count);


    return 0;
}