#include <stdio.h>
int main() {

int arr[4]={6,7,3,2};
int target=9;

for(int i=0;i<=3;i++){

    for(int j=i+1;j<4;j++){
   
   if(arr[i]+arr[j]==9) 

   printf("%d %d\n",arr[i],arr[j]);

  
}

 }

    return 0;
}