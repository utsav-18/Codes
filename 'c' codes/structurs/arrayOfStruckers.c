#include <stdio.h>
#include <string.h>

int main () {

  typedef struct p {
    char name[20];
    int attack;
    int speed;
    char tier;

  }p;

 p arr[3];  

strcpy(arr[0].name,"Pikachu");
arr[0].attack=50;
arr[0].speed=70;
arr[0].tier='A';

strcpy(arr[1].name,"Charizard");
arr[1].attack=150;
arr[1].speed=60;
arr[1].tier='S';

strcpy(arr[2].name,"Mewtwo");
arr[2].attack=250;
arr[2].speed=160;
arr[2].tier='K';

for(int i=0;i<3;i++){
    printf("Name:%s\n",arr[i].name);
    printf("Attack:%d\n",arr[i].attack);
    printf("Speed:%d\n",arr[i].speed);
    printf("Tier:%c\n\n",arr[i].tier);
}

return 0;

}



