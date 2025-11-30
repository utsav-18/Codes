#include <stdio.h>
int main () {

int arr[10]={90,80,32,33,98,55,65,45,30,19};

 int max = arr[0];
   
   for(int i=0;i<10;i++) {
        
        if(max<arr[i]){
              max =arr[i];
                 printf("greatest array is arr[%d] => %d ",i ,max);
        }
       
   }



    return 0;

}