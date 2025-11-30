#include <stdio.h>
int main () {

  int n ;
  int r = 0;

  printf("Enter the value :");
  scanf("%d",&n);

  while (n!=0){

     int ld = n %10;
    
     r = r * 10 ;               //  r = r + (ld);

     r = r + (ld);              // r = r * 10 ;
    
     n = n / 10 ;               // n = n / 10          if we will use this code then in last last after the bracket we also have write r = r / 10;


}                     



   printf("%d" ,r); 
   

    return 0;
}