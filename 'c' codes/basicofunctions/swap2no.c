#include <stdio.h>
int main () {
   
int a,b,temp;

printf("Before swap a:\n");
scanf("%d",&a);

printf("Before swap b:\n");
scanf("%d",&b);

   a=a+b;
   b=a-b;
   a=a-b;

//without 3rd variable;
//    temp=a;
//    a=b;
//    b=temp;

   printf("After swap a:%d\n\nAfter swap b:%d ",a,b);


    return 0;
}