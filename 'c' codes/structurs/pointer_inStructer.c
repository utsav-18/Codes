#include<stdio.h>
#include<string.h>

//global declaration;

  typedef struct pokemon {
    char name[15];
    int attack;
    int hp;
    int speed;
    char tier;

  } pokemon ;

  int main () {
    
     pokemon A;
     // int* x -> address of integer value;

     pokemon* x = &A;  // it will work;
        printf("overall add: %p\n",x);
  
strcpy(A.name,"Pickachu");
A.attack=100;
A.speed=150;



pokemon B;
strcpy(B.name,"mewtwo");
B.attack=200;
B.speed=105;


printf("Pickachu name add: %p\n",&A.name);

printf("Pickachu attack add: %p\n",&A.attack);

printf("Pickachu speed add: %p\n",&A.speed);


printf("mewtwo name add: %p\n",&B.name);

printf("mewtwo attack add: %p\n",&B.attack);

printf("mewtwo speed add: %p\n",&B.speed );

return 0;
  
  }

