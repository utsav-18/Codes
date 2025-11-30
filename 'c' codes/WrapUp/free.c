#include <stdio.h>
#include <stdlib.h>
int main () {

//    int x=9;
//    int* ptr = NULL;  //resereved memory
//    printf("%p",ptr);

// int * ptr = (int*) calloc(10,4);
// ptr++;
// free(ptr);

// int * ptr = (int*) calloc(10,4);
// int *p= ptr;
// p++;
// free(ptr);

int * ptr = (int*) calloc(10,4);

int *p= ptr;                        // by this head of the memory is resereved;

ptr++;

free(ptr);


//I won't get it;

    return 0;

}