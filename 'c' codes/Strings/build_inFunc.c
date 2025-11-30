#include<stdio.h>
#include<string.h>


int cmp(){
    
    char s1[20]="UTSAV";
    char s2[10]="UTSAV";

    if(strcmp(s1,s2) == 0) printf("they are same: %s=%s",s1,s2);
    else  printf("they are not same: %s!=%s",s1,s2);

}

int   conatinate(){
    
    char s1[20]="UTSAV ";
    char s2[20]="SHRIVASTAVA";    //it will not work using pointer;//read only;

    strcat(s1,s2);
    printf(" Added String => %s\n",s1);

     return 0;

}

int  len(){

  char* str1 ="UTSAV";
  
  int x= strlen(str1);  // for finding lenght;
  
  printf(" size => %d\n",x);

  return 0;

}

int formnew() {
    
    char strg1[10]="UTSAV RAJ";
    char strg2[10];

    strcpy(strg2,strg1);   //for giving string value to another; // deap copy
    printf(" formed string2=> %s\n",strg2);

return 0;

}

int main () {
  
  len();       // for getting lenght;
  formnew();    // //for giving string value to another; // deap copy;
  conatinate(); // for adding two strings;
  cmp();  // for comparing;

  return 0;
}

