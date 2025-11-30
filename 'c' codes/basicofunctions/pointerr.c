#include <stdio.h>
int main () {

int a=5;

int* x = &a;                 // syntax for pointer;

printf("%p\n",x);            // %p is for printing address;

printf("%p",&x);             // pointerr also have a  perticular address ;


    return  0;
}