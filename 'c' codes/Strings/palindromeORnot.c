#include <stdio.h>
#include <string.h>
    int main () {

char s[1000],g[1000];
printf("Enter: ");

fgets(s,sizeof(s),stdin);

int size1=strlen(s)-1;

for(int i=0;s[i]!='\0';i++){

g[size1-i]=s[i];

}

for(int i=0;i<=size1;i++){
    printf("%c",g[i]);
}



        return 0;

    }