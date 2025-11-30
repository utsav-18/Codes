#include <stdio.h>
int main () {

 int num;

printf("Entre an integer number:");
 scanf("%d",&num);

if(num>0) printf("Positive \n");
if(num<0) printf("Negative\n");
if(num==0) printf("Zero\n");

char c;

do {

c =getchar();
  
printf("Want to check again(press y if 'yes' and n of 'No'):\n");
    scanf("%c",&c);

              if(c=='y') {
        

      printf("Entre an integer number again:");
      scanf("%d",&num);

if(num>0) printf("Positive \n");
if(num<0) printf("Negative\n");
if(num==0) printf("Zero\n");

}

         else printf("BYE BYE!!");

} 

while (c=='y');
        
return 1;

}