// print using pointers;

#include<stdio.h>

typedef struct person{
    int age;
    float weight;

} person;

void change(person *p1,person *p2){    // it can change the values;

(*p1).age=21;        //(star way)
(*p1).weight=80.5;

p2->age=19;          // (arrow way) alternative way;
p2->weight=63.5;


return;

}

int main () {

    person p1;

p1.age=22;
p1.weight=70.5;


person p2;

p2.age=18;
p2.weight=65.3;


printf("Age1 :%d\n",p1.age);
printf("Weight1 :%.2f\n",p1.weight);

printf("Age2 :%d\n",p2.age);
printf("Weight2 :%.2f\n",p2.weight);

change(&p1,&p2);          // it can change the values;
                      // because we are using pointers;
                      
printf("Age1* :%d\n",p1.age);
printf("Weight1* :%.2f\n",p1.weight);

printf("Age2* :%d\n",p2.age);
printf("Weight2* :%.2f\n",p2.weight);

return 0;

}

