#include <stdio.h>

void display(int arr[], int x){
   
   for(int i=0;i<x;i++){
    printf("%d ",arr[i]);

   }

}

void make(int arr[], int x) {
    for(int i = 0; i < x; i++) {
        printf("Arr[%d] => ", i);
        scanf("%d", &arr[i]);
    }
}

int main () {

      int n ;
  printf("Enter size of first array:");
  scanf("%d",&n);

      int m ;
  printf("Enter size of second array:");
  scanf("%d",&m);

int num1[n];

make(num1,n);  //formation of array 1;
printf("First array=>\n");

display(num1,n);   //for displaying formed array 1;
printf("\n");

int num2[m];

make(num2,m);  //formation of array 2;
printf("Second array=>\n");

display(num2,m); //for displaying formed array 2;
printf("\n");



int smallestCommon = -1; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {


if (num1[i] == num2[j] && (smallestCommon == -1 || num1[i] < smallestCommon)) smallestCommon = num1[i];
                
    
      }
    
    }




printf("Least Common number between two array is: %d",smallestCommon);

   return 0;

}