#include <stdio.h>
int main () {

int a,b,c,d,result;

printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d",&b);

printf("Enter c:");
scanf("%d",&c);

printf("Enter d:");
scanf("%d",&d);

result = (a+1)+(b+1)+a+(c-1)+d-a;      //a++ + ++b + a + --c + d-a;



printf("%d",result);


    return 0;
}