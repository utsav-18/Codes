#include<stdio.h>
#include<string.h>

int main () {

  struct pokemon {
    char name[15];
    int attack;
    int hp;
    int speed;
    char tier;

  } pokemon ;
  
  struct pokemon a;

strcpy(a.name,"pickachu");
a.hp=100;
a.attack=150;
a.speed=180;
a.tier='A';

// legendary pokemon containing abilities of a normal pokemon;

struct legendaryPokemon{

    // char name[15]; //instead of writing it again 
    // int attack;
    // int hp;
    // int speed;
    // char tier;

    struct  pokemon normal;
    char ability[10]; // extra one;

} legendaryPokemon;

struct legendaryPokemon mewtwo;

strcpy(mewtwo.normal.name,"Mewtwo");
strcpy(mewtwo.ability,"Pressure");
mewtwo.normal.hp=150;
mewtwo.normal.attack=180;
mewtwo.normal.speed=200;
mewtwo.normal.tier='S';

// god pokemon containing abilities of a normal pokemon & legendary p;

struct godpokemon{

struct legendaryPokemon l;  // L =legendary
struct  pokemon normal;
char specialAttack[20];

}godpokemon;

struct godpokemon arceus;

strcpy(arceus.l.normal.name,"Arceus");   //arceus.lengendary.normal.name;
strcpy(arceus.specialAttack,"Fire");
strcpy(arceus.l.ability,"Turns into stone");
arceus.l.normal.attack=250;
arceus.l.normal.hp=500;
arceus.l.normal.speed=320;
arceus.l.normal.tier='G';


printf("Name : %s\n",a.name);
printf("Attack : %d\n",a.attack);
printf("Speed : %d\n",a.speed);
printf("HP : %d\n",a.hp);
printf("tier : %c\n\n",a.tier);


printf("Name : %s\n",mewtwo.normal.name);
printf("Attack : %d\n",mewtwo.normal.attack);
printf("Speed : %d\n",mewtwo.normal.speed);
printf("HP : %d\n",mewtwo.normal.hp);
printf("tier : %c\n",mewtwo.normal.tier);
printf("Ability: %s\n\n",mewtwo.ability);

printf("Name : %s\n",arceus.l.normal.name);       //arceus.lengendary.normal.name;
printf("Attack : %d\n",arceus.l.normal.attack);
printf("Speed : %d\n",arceus.l.normal.speed);
printf("HP : %d\n",arceus.l.normal.hp);
printf("tier : %c\n",arceus.l.normal.tier);
printf("Ability: %s\n",arceus.l.ability);
printf("specialAttack: %s\n\n",arceus.specialAttack);

    return 0;

}