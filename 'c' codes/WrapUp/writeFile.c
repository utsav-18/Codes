#include<stdio.h>
int main () {

FILE *ptr=fopen("Pubg.txt","w");

char str[50]=" Hello world \n Text has been replaced.";

fputs(str,ptr);

fclose(ptr);  //closing is important;

// it will replace the file contents by our new input;

    
    return 0;

}