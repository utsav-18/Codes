#include <stdio.h>
#include <math.h>  // without including this will not work;

void main() {

int n;

printf("Enter a num:");
scanf("%d",&n);

float cubert = cbrt(n);

printf("%f",cubert);


}