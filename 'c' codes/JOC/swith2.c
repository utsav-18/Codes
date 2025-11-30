#include <stdio.h>
int main() {

char op;
printf("Eneter an operator: (+,-,*,/) => ");
scanf("%c",&op);

int a;
printf("Eneter a:");
scanf("%d",&a);

int b;
printf("Eneter b:");
scanf("%d",&b);

switch (op){

case '+':
printf("Sum is : %d",a+b);
break;

case '-':
printf("Substraction is : %d",a-b);
break;

case '*':
printf("Multiplication is : %d",a*b);
break;

case '/':
printf("Division  is : %d",a/b);
break;


default:
printf("invalid operator");

}

return 0;

}