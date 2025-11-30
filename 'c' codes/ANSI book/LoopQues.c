#include <stdio.h>
int main () {

int num;

printf("______________________\n");
printf("|Number  Square  Cube|\n");
printf("|------  ------  ----|\n");

for( num=1; num<=10;num++){
    printf("|%3d %7d %8d|\n",num,num*num,num*num*num);
}
printf("|____________________|\n");
    return 0;

}