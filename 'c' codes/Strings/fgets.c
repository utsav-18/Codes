#include <stdio.h>
#include <stdlib.h>

int main (){

char line[100];
printf("Enter line:\n");

fgets(line,sizeof(line),stdin);

printf("Line: %s",line);



return 0;

}