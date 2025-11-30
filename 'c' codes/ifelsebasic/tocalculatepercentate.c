//percentage = (given  value / total value ) * 100;
// given value = (percentage * total value) / 100 ;

#include <stdio.h>
int main () {

 float gv,tv,p;
  
  printf("Enter the percentage value :");
scanf("%f" , &p);

 printf("Enter the total value ;");
scanf("%f",&tv);

gv = (p * tv ) / 100;

printf("%f",gv);



    return 0;

}