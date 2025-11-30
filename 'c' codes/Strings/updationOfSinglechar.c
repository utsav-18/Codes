#include <stdio.h>
    int main () {

        char s[100];
        printf("Write: ");

        // scanf("%s",&s); // it will work for a word only;
        fgets(s,sizeof(s),stdin);

        printf("You entered: %s\n",s);

s[0]='U';  //updation of single character is possible; //only possible in c & c++;

printf("Changed value: %s",s);

    }