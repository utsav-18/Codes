//My code
//Arrange all zeros in end;

#include <stdio.h>
int main () {
 
  int arr[10]={0,1,2,0,3,4,0,5,0,6};
  int n=10;
  int temp;

 for(int i=0;i<n;i++){   // time complexity is O(n^2);

 for(int j=0;j<n-i;j++){   // j<n we can do but n-i will reduce the steps;

if(arr[j]==0){

    temp = arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;

  }  }  }


  for(int j=0;j<n;j++){

printf("%d ",arr[j]);

 }
 
 
    return 0;

}