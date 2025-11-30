#include <stdio.h>
#include <string.h>


void conc(char *ptr1,char *ptr2){

    while(*ptr1!='\0'){
    ptr1++;
    
}

while(*ptr2!='\0'){

    *ptr1=*ptr2;
    ptr1++;
    ptr2++;
    

}
  

    }


    int main () {

    char s1[10000];
        char s2[10000];

        printf("Enter 1st string: ");
        fgets(s1,sizeof(s1),stdin);
        printf("Entre 2nd string: ");
        fgets(s2,sizeof(s2),stdin);

     s1[strcspn(s1, "\n")] = '\0';   // for removing new line;
     s2[strcspn(s2, "\n")] = '\0';
     
conc(s1,s2); 

printf("Added String s1+s2 =>  %s\n",s1);

        return 0;

    }
