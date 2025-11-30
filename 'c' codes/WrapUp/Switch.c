#include <stdio.h>
int main () {

int n;
printf("Enter date:");
scanf("%d",&n);

switch (n) {

case 1 :
  printf("Monday");
  break;

case 2 :
  printf("Tuesday");
  break;

case 3 :
  printf("Wensday");
  break;

case 4 :
  printf("Thursday");
  break;

case 5 :
  printf("Friday");
  break;

case 6 :
  printf("Saturday");
  break;

case 7 :
  printf("sunday");
  break;  


default :
   printf("invalid ");

}
    return 0;

}