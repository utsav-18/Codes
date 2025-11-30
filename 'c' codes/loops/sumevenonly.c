#include <stdio.h>
int main () {

int num ;
int sum = 0;
int ld = 0;

printf("Entre the number:");
scanf("%d" , &num) ;

while (num!=0){
ld=num%10;

if (ld%2==0){
sum = ld +sum;
}

num = num /10;
}

printf("%d" , sum);


    return 0 ;

}