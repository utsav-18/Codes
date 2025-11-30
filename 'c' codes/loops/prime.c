#include <stdio.h>
int main () {
 

 int x;

 printf("Enter the value:");
 scanf("%d" ,&x);

int a = 0;

for  (int i=2;i<=x-1;i++){
if (x%2==0); {
a=1;
break;
  }
}

if (a==0)  printf("Prime number");
   
else  printf("Not a prime ");
   
   
    return 0 ;

}
