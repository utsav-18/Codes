#include <stdio.h>


int addition (int a ,int b) {            
    return a+b;             
}

int substraction (int a ,int b) {   
    return a-b;             
}

int multiplication (int a ,int b) {            
    return a*b;             
}

int main (){

int n1,n2;
printf("n1:");
scanf("%d",&n1);

printf("n2:");
scanf("%d",&n2);

int add = addition(n1,n2);
printf("addition: %d\n",add);

int sub = substraction(n1,n2);
printf("substraction: %d\n",sub);

int mult = multiplication(n1,n2);
printf("multiplication: %d",mult);




    return 0;
}