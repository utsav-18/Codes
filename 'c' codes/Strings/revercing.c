#include <stdio.h>
#include <string.h>

    int main (){


char s1[50];
char s2[50];

printf("Give an input:");
fgets(s1,sizeof(s1),stdin);

int l = strlen(s1)-1;

for(int i=l;i>=0;i--){
    s2[l-i]=s1[i];
}

for(int i=0;i<=l;i++){
    printf("%c",s2[i]);
}


    }