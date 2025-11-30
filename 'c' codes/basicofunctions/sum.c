#include <stdio.h>


int addition (int a ,int b) {            //n1=a && n2=b autometically
    return a+b;             
}

int main (){

int n1,n2;
printf("n1:");
scanf("%d",&n1);

printf("n2:");
scanf("%d",&n2);

int sum = addition(n1,n2);

printf("sum : %d",sum);


    return 0;
}