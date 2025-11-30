#include<stdio.h>
#include<string.h>
int main() {

    char s1[]="I am Iorn Man!!";
   char s2[]="I am Iorn Man!!";
    
   // strings are not same ;
   // they have diff address;

    s2[0] ='u';

    printf("s1=> %s\n",s1);
      printf("s2=> %s\n",s2);

     printf("s1=> %p\n",s1);
      printf("s2=> %p",s2);

  return 0;

}