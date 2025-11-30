#include <stdio.h>
 int main() {

 int arr[8]={1,2,3,4,5,6,7,8};
int x,count=0;
printf("Entre x:");
scanf("%d",&x);


for(int i=0;i<8;i++){
  
  for(int j=i+1;j<8;j++){
  
  if(arr[i]+arr[j]==x) {
     count++;
     printf("(%d,%d)\n",arr[i],arr[j]);

    }
  }
}

printf("Total pairs after adding gives %d are => %d",x,count);

    return 0;
}