#include <stdio.h>
int main() {

struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier; //S,A,B,C,D

}  pikachu, charizard , mewtwo;     //second form of declaration;

pikachu.attack = 60;      //we can also take it as input.
pikachu.speed=100;
pikachu.tier='A';
pikachu.hp=50;

charizard.attack = 130;
charizard.speed=80;
charizard.tier='S';
charizard.hp=80;

mewtwo.attack = 170;
mewtwo.speed=200;
mewtwo.tier='G';
mewtwo.hp=150;

printf("%d\n",pikachu.attack);
printf("%d\n",mewtwo.attack);

printf("%c\n",pikachu.tier);
printf("%c",mewtwo.tier);

    return 0;

}