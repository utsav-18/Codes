#include <stdio.h>
#include <string.h>
int main() {

 typedef struct pokemon{
    char name[10];
    int attack;
    int speed;

}pokemon;

pokemon A,B,C;
strcpy(A.name,"Pickachu");
A.attack=100;
A.speed=150;

strcpy(B.name,"mewtwo");
B.attack=200;
B.speed=105;

// strcpy(C.name,B.name);
// C.attack=B.attack;
// C.speed=B.speed;
//or

C=B;  // deapcopy;

printf("%s\n",C.name);
printf("%d\n",C.attack);
printf("%d\n",C.speed);

return 0;

}