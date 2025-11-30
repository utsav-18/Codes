
#include<stdio.h>
int main () {

   int a ;
   printf("Enter a num :");
   scanf("%d",&a);

   printf("Num changed to hexadecimal no is : %#x\n",a);
    printf("Num changed to octal no is : %#o\n",a,a);

    return 0;

}