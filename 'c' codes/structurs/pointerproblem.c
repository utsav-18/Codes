#include<stdio.h>
int main() {

 int x=5,y=6;
 int* a = &x, b = &y;  // we can not intialize like that;
 
 // int *a=&x, *b=&y; //reather we can use this one;

//int* x,y ; == int *x & int y

 printf("%p\n",a);
 printf("%p\n",b);


    return 0;

}