#include <stdio.h>
//#include <string.h>

int main() {

printf("Enter a string input :");

char str[50];

gets(str);


printf("Input was : %s",str);

int i=0;
int size=0;

while 
    (str[i]!='\0'){
    size++;
    i++;

}

printf("\nsize is: %d",size);


return 0;
}