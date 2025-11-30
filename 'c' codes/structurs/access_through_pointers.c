// print using pointers;

#include<stdio.h>
#include <string.h>

int main () {
typedef struct person{
    int age;
    float weight;

}person;

person p1;
 p1.age =18;
 int *a = &p1.age;  //address

 p1.weight=65.5;
 //person* b = &p1.weight;  // why not working;

printf("%p\n",a);      // same;
printf("%p",&p1.age);  // same;



return 0;

}

// incomplete;