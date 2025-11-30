#include <stdio.h>
int main () {
    
    int  n ;
    int sum = 0;
    int a =1;
    int b =1;

    printf("Enter the term :");
    scanf ("%d" , &n);



 for (int i = 1; i<=n-2;i++ ){                 // couse the code is running two step forward so we are getting 8th term on the place of 6th term  ( i<=n );

    sum = a+b;
    a=b;
    b=sum;



}


   printf("%d" , sum ); 
    
  return 0;

}