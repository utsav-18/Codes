#include <stdio.h>
int  fibo(int n ){

if(n<=2) return 1;

return fibo(n-1) + fibo(n-2);

}

int main () {

int n;
printf("n:");
scanf("%d",&n);

 int f = fibo(n);

printf("fibo is : %d",f);


  return 0;
}