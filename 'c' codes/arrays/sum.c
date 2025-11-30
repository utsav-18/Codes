#include <stdio.h>
int main () {

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
 
 // for sum of the elements
 
int sum=0;
for(int i=0;i<a;i++) {
     sum=sum+arr[i];
}

printf("\nSum of the elements of the arrays formed is => %d",sum);

 return 0;

}