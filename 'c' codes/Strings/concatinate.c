#include <stdio.h>
#include <string.h>
    int main () {

        char s1[10000];
        char s2[10000];

        printf("Enter 1st string: ");
        fgets(s1,sizeof(s1),stdin);
        printf("Entre 2nd string: ");
        fgets(s2,sizeof(s2),stdin);

     s1[strcspn(s1, "\n")] = '\0';   // for removing new line;
     s2[strcspn(s2, "\n")] = '\0'; 

int i;

    int size1=strlen(s1);

      for(i=0;s2[i]!='\0';i++){

            s1[size1+i]=s2[i];

      }


printf("Added String s1+s2 =>  %s\n",s1);

        return 0;

    }
