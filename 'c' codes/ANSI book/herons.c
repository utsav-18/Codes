#include <stdio.h>
#include <math.h>
int main () {

float area,s;

int a;
printf("Enter first side: ");
scanf("%d",&a);

int b;
printf("Enter second side: ");
scanf("%d",&b);

int c;
printf("Enter third side: ");
scanf("%d",&c);


if(a+b>c && a+c>b && b+c>a) {

s=(a+b+c)/2;


area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("%f",area);

}
 else printf("Invalid triangle");

    return 0;

}