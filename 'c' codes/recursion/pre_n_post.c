#include <stdio.h>

void preinpost(int n) {
  if(n==0) return;

  printf("pre  %d\n",n);
  preinpost(n-1);
  printf("in   %d\n",n);
  preinpost(n-1);
  printf("post %d\n",n);
 
//   printf("%d",n);
//   preinpost(n-1);
//   printf("%d",n);
//   preinpost(n-1);
//   printf("%d",n);

}

int main () {
 
 int n;
 printf("n:");
 scanf("%d",&n);

 preinpost(n);

    return 1;
}