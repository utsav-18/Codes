#include <stdio.h>
int main () {

int n1 , n2 ;

printf("Enter the value of n1 :");
scanf("%d" , &n1);

printf("Enter the value n2:");
scanf("%d", &n2);

int power = 1;

for (int i = 1; i<=n2;i++){

    power = power * n1 ;
}

printf(" %d raised to %d is :%d" ,n1,n2, power);







    return 0 ;
}