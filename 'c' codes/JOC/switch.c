#include <stdio.h>
#include <string.h>

int main() {

int id;   // 500
printf("Enter ID:");
scanf("%d",&id);

char p1[10],p2[10]="hello";

switch (id) {
 case 500 : 
    printf("Enter your passward :");
   
   scanf("%s",&p1);
      
      if(strcmp(p1,p2) == 0) printf("Welcome Dear Programmer \n");  

else
    printf("Incorrect password " );
   
   break;

default :
  printf("Incorrect ID");

}

return 0;

}