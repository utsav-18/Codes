#include <stdio.h>
int main() {

typedef struct pokemon{
    char name[20];
    int hp;
    int speed;
    int attack;
    char tier; //S,A,B,C,D

}pokemon;     //second form of declaration;

// pokemon p1;

// p1.attack = 60;      // instead of initialiging like this 
// p1.speed=100;      
// p1.tier='A';
// p1.hp=50;

//we can do;

pokemon p1 ={"Pikachu",100,180,200,'A'} ;


printf("Name: %s\n",p1.name);
printf("Tier: %c\n",p1.tier);
printf("Attack: %d\n",p1.attack);
printf("Speed: %d\n",p1.speed);
printf("HP: %d\n",p1.hp);

    return 0;

}