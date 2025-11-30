#include <stdio.h>
#include <limits.h>
int main () {
 
 int arr[5]={10,5,8,6,9};
 
 // for finding minimum value ;

  int max = INT_MIN;    
   
   for(int i=0;i<5;i++) {
        
        if(max<arr[i]){
              max =arr[i];
        }

   }
         printf("max :%d\n",max);

 // for find minimum value

 int min = INT_MAX;    
   
   for(int i=0;i<5;i++) {
        
        if(min>arr[i]){
              min =arr[i];
        }

   }

         printf("min :%d",min);

    return 0;
}