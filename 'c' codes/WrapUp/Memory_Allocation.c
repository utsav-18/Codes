#include <stdio.h>
#include <stdlib.h>
int main () {
 
int * ptr = (int*)calloc(10,4);

printf(" calloc :%d\n",*ptr);  // garbase value => 0

int *ptr2 = (int*)malloc(10*4);

printf("Malloc :%d",*ptr2);  // garbaze vlue non zero
   
    return 0;

}