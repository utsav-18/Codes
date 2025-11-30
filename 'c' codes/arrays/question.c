#include <stdio.h>
 int main() {

 int arr[7]={1,2,3,4,5,6,7};

for(int i=0;i<7;i++){
   
   if(i%2!=0) arr[i] = arr[i] *2;     // for *2 in odd index
   else arr[i] = arr[i]+10;           // for +10 in even index
    printf("%d ",arr[i]);
}
    return 0;
}