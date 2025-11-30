#include <stdio.h>
int factorial(int n){ 
   
    if(n==1  || n==0) return 1;
  
  return n*factorial(n-1);  // function calling itself

}

int main () {
  
  int n ;
  printf("n:");
  scanf("%d",&n);

int f = factorial(n);

   printf("Factorial of %d is : %d",n,f);
 

   return 0 ;

 }