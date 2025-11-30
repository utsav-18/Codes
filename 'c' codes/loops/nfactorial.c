#include <stdio.h>
int main () {

int n ;
 int  f =1;
 printf("Enter an integer :");
 scanf("%d" , &n);

 for (int i=1;i<=n;i++) {

f = f * i;


printf(" the factorial  of %d is :%d\n" ,i, f);

 }




    return 0 ; 

}