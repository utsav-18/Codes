#include <stdio.h>
#include <string.h>

    int main() {

char c[]="utsav raj";
int count=0;

char b[strlen(c)];

for(int i=strlen(c);i>=0;i--){
    b[i]=c[i];
    printf("%c",b[i]);

}

        return 0;

    }