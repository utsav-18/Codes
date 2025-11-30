#include <stdio.h>
int stairs(int n){

if (n==1) return 1;
if(n==2) return 2;
int totalways =stairs(n-1)+ stairs(n-2);
return totalways;

}

int main () {

int n;
printf("n:");
scanf("%d",&n);

 int ways = stairs(n);

printf("There are  %d ways",ways);
 
 return 0;
}