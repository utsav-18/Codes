#include<stdio.h>
#include <math.h>
#define PI 3.1428571428571

int main() {

float r;
printf("Enter radius:");
scanf("%f",&r);

float area = PI * pow(r,2);   // pow (r,4)  pow(r,10)  all we can do;

printf("Area : %f",area);


}