#include <stdio.h>
 int factorial(int a){
    int fact=1;
    for (int i=1;i<=a;i++){
         fact = fact*i;

    }
    return fact;
 }

 int main () {
  
  int n ;
  printf("n:");
  scanf("%d",&n);

 int m ;
  printf("m:");
  scanf("%d",&m);

  int f1 = factorial(n);
  int f2 = factorial(m);


  printf("Factorial of %d is : %d\n",n,f1);
  printf("Factorial of %d is : %d",m,f2);

   return 0 ;

 }

 
