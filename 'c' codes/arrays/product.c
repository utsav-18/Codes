#include <stdio.h>
int main () {

int a;
printf("Enter the size of array:");
scanf("%d",&a);

int arr[a];


for(int i=0;i<a;i++){
     printf("Enter arr[%d] = ",i);
     scanf("%d",&arr[i]);

}

printf("Formed array is =>");

for(int i=0;i<a;i++){
     printf("%d ",arr[i]);
        
}

int product=1;
for(int i=0;i<a;i++) {
     product=product*arr[i];
}

printf("\nproduct of the elements of the arrays formed is => %d",product);

 return 0;

}