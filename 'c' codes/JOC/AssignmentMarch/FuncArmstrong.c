#include <stdio.h>

int arms(int n){

int ld , sum=0;

   
while (n>0) {

 ld = n%10;

sum = sum + (ld*ld*ld);
 
 n = n /10;

}

return sum;

}



int main () {

int  n;
printf("Enter a number:");
scanf("%d" ,&n);

int originalNumber=arms(n); 


if(originalNumber == n){
    printf("Armstrong");
 }
else {
   printf("Not Armstrong");
}

return 0 ;

}

