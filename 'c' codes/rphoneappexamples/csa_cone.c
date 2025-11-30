#include <stdio.h>
#include <math.h>

int main () {

float r,h,l,csa;

printf("Enter radius of cone: ");
scanf("%f",&r);

printf("Enter hieght of cone: ");
scanf("%f",&h);

l=(r*r)-(h*h);

float  root = sqrt(l);

printf("root of %f is :%d\n",l,root);
   
   csa=3.14*r*l;

   printf("Volume of the cone is : %f(cm)3",csa);

   
    return 1;
}