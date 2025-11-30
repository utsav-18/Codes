#include <stdio.h>
#include <limits.h>

int main () {

int arr[10]={10,9,8,7,6,5,4,3,2,1};

 int max = INT_MIN;
   int smax= INT_MIN;

   for(int i=0;i<10;i++) {
        
        if(max<arr[i]){

              max =arr[i];
             }

// max =9;

   }
      for(int i=0;i<10;i++) {
        
        if( arr[i]!= max  && smax<arr[i])

              smax =arr[i];


   }

   printf(" Second largest value is =>%d",smax);


    return 0;

}