// print using pointers;

#include<stdio.h>

int main () {
typedef struct person{
    int age;
    float weight;

} person;

person p1;

p1.age=22;
p1.weight=70.5;

printf("Age :%d\n",p1.age);
printf("Weight :%.2f\n",p1.weight);
person *a = &p1;

// *a.age=21;   // it will be wrong !!

(*a).age=21;       // correct
(*a).weight=80.5;

printf("Age* :%d\n",p1.age);
printf("Weight* :%.2f",p1.weight);

return 0;

}

