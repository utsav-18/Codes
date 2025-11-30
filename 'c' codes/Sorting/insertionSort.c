#include <stdio.h>

int main(){

  int arr[7]={7,4,5,9,8,2,1};
  int n=7;
  int temp;

printf("Given array: ");

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");

/* 
# insertion sort;
 
  => Time Complexity:-

     worst = O(n^2);
     Avg = O(n^2);
     Best = O(n);

     * And also it is 
       Stable;
*/

for(int i=1;i<n;i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){
                temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
         j--;
    }
}

printf("Given array arranged in increasing order: ");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
