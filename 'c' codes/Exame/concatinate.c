#include <stdio.h>
    #include <string.h>

    int main(){

        //char s1[100]="Utsav ",s2[100]="Raj";
        char s1[100];
        char s2[100];

        printf("Enter s1:");
        fgets(s1,sizeof(s1),stdin);
        printf("Entre s2:");
        fgets(s2,sizeof(s2),stdin);

        int i=0;
        int l=strlen(s1);

        while(s2[i]!='\0'){
            s1[l+i]=s2[i];
            i++;
        }

            s1[l+i]='\0';

         printf("%s",s1);

        return 0;

    }

    