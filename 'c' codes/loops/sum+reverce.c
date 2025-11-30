#include <stdio.h>
int main () {

  int n ;
  int r = 0;
  int sum = 0;


  printf("Enter the value :");
  scanf("%d",&n);

  while (n!=0){

   int ld = n %10;
    
     r = r * 10 ;              

     r = r + (ld);              
    
     n = n / 10 ;              

    sum = sum + ld;
}                     



   printf("The reverse of the number is :  %d\n The sum of yhe digit is :  %d" , r , sum ); 
   

    return 0;
}