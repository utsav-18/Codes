#include<stdio.h>
#include<string.h>
int main() {

    char str[]="I am Iorn Man!!";
    char* ptr =  str ; 

     int i = 0;

  while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;  // this can also be possible 
    i++;
  
  }
 printf("\n%d",i);

  return 0;

}