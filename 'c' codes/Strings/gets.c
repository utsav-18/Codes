#include <stdio.h>
//#include <string.h>

int main() {

printf("Enter a string input :");

char str[50];

//scanf("%[^\n]s",&str);        // takes only first word ;

gets(str);

printf("Input was : %s",str);

return 0;
}