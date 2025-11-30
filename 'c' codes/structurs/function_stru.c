//structers are pass by value;

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//global declaration;

  typedef struct pokemon {
    char name[15];
    int attack;
    int hp;
    int speed;
    char tier;

  } pokemon ;

void func(pokemon pikachu){
 printf("Hp: %d",pikachu.hp);
 return ;

}

int main () {

//// this value are defined inside so func will not work;
//// so we need to define it outsidde the main(Global declaration);
//   typedef struct pokemon {
//     char name[15];
//     int attack;
//     int hp;
//     int speed;
//     char tier;

//   } pokemon ;

pokemon pikachu; 
pikachu.attack=150;
pikachu.hp=200; 

printf("Attack: %d\n",pikachu.attack);

func(pikachu);

return 0;

}

// working
