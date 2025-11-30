#include <stdio.h>
int main () {
 
 int arr[5]={-10,-5,-8,-6,-9};

 //int max = -1; => in case of all negative elemets it will fale;
  int max = arr[0];
   
   for(int i=0;i<5;i++) {
        
        if(max<arr[i]){
              max =arr[i];
        }

   }

printf("%d",max);
    return 0;
}