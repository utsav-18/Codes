#include <stdio.h>

int main() {

typedef struct  p{
    int hp;
    int speed;
    int attack;
    char tier; //S,A,B,C,D
} p;

p pikachu;     // now we dont need to write struct again and again;

pikachu.attack = 60;     
pikachu.tier='A';
pikachu.hp=50;

p charizard;
charizard.attack = 130;
charizard.tier='S';
charizard.hp=80;

printf("%d\n",pikachu.attack);
printf("%c\n",charizard.tier);


return 0;
}