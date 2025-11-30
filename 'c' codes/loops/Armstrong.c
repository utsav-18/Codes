#include <stdio.h>
int main () {

int r , n , sum=0;

printf("Enter a number:");
scanf("%d" ,&n);

int originalNumber=n;         

while (n>0) {

 r = n%10;

sum = sum + r*r*r;
 
 n = n /10;

}

if(originalNumber == sum){
    printf("Armstrong");
 }
else {
   printf("Not Armstrong");
}
return 0 ;

}
//not working ; => // working ;  we need to store original number first;

