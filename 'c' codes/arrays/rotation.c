#include <stdio.h>

void reverse(int arr[],int a,int b){

for(int i=a,j=b;i<j;i++,j--){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}

return ;

}

int main() {

    int a;
printf("Enter the size of array:");
scanf("%d",&a);

int arr[a];

// taking array input

for(int i=0;i<a;i++){
     printf("Enter arr[%d] = ",i);
     scanf("%d",&arr[i]);

}

printf("Formed array is =>");

// for displaying the formed array

for(int i=0;i<a;i++){
     printf("%d ",arr[i]);
        
}

 int k;

    printf("\nEnter k:");
    scanf("%d",&k);
    printf("\nThe formed array has been rotated 'k' time => ");
    
    k=k%a;   /* if k = 100 => 100%5 => 0 ; so rotation will be 0 time or 100 time it will be equal */

   // int arr[7]={1,2,3,4,5,6,7};

    reverse(arr,0,a-1);
    reverse(arr,0,k-1);
    reverse(arr,k,a-1);

            for(int i=0;i<a;i++) {
            printf("%d ",arr[i]); 
         }

return 0;

}