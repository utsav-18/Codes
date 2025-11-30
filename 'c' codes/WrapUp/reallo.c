#include <stdio.h>
#include <stdlib.h>
int main () {

  int *ptr = (int*)malloc(10*4);
  printf("%p\n",ptr);
                                  //for small value it will not change; => 11*4 12*4,13,14 => at 15 it is  starting to change;
  ptr = realloc(ptr,15*4);        //memory allocated adress will be changed 
  printf("%p",ptr);               // that is what we called M re-allocation;

    return 0;

}