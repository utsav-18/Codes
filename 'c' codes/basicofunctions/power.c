#include <stdio.h>
#include <math.h>

int  main (){

int a;
printf("a:");
scanf("%d",&a);

int b;
printf("b:");
scanf("%d",&b);

int  power = pow(a,b);

printf("%d to the power %d is: %d" ,a,b,power);

    return 0;
}