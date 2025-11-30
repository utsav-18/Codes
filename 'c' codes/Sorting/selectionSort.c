#include <stdio.h>
#include<limits.h>

int main(){

  int arr[7]={7,4,5,9,8,2,1};
  int n=7;
  int temp;

printf("Given array: ");

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");

// selection sort;

  for(int i=0;i<n-1;i++){
     
     int min = INT_MAX;
     int mindx = -1;

        for(int j=i;j<=n-1;j++){

            if(min>arr[j]) {
              min=arr[j];
              mindx=j;  
  
       }
      // swap the min and first element of unsorted part;
      //swap minindx and i;
      int temp=arr[mindx];
      arr[mindx]=arr[i];
      arr[i]=temp;

        }
  }
   
printf("Given array arranged in increasing order: ");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
 // but it have time complexity of = O(n^2); bubblesort is better;
 // Also selectionSort is not stable; {0,1,2,4,3',3}; (3' will make trouble);


 // I have a doubt;