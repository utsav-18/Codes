#include <stdio.h>
int power(int a,int b){

if(b==0) return 1;
if(b==1) return a;

 return  a*power(a,b-1);

}

int main () {

int a ,b;

printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d",&b);

int p = power(a,b);

printf("%d ^ %d is:%d",a,b,p);

    return 0;

}