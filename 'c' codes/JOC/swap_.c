#include <stdio.h>
int main () {

int a = 69;
int b = 96;

printf("Before swapping a is :%d\nBefore swapping a is :%d\n" , a,b);


a=a-b;          
b=a+b;          
a=b-a;          

printf("After swapping a is :%d\nAfter swapping a is :%d" , a,b);


    return 0;

}


