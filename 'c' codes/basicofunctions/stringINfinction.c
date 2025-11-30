#include <stdio.h>
#include <string.h>

void print(char name[]){

printf("%s",name);

}

    int main(){

        char name[100];
        printf("Entre name:");
        fgets(name,sizeof(name),stdin);

        print(name);

        return 0;

    }