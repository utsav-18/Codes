#include <stdio.h>

void tower(int n , char s, char h, char d){    // source , helper , destination;
  if(n==0) return;

  tower(n-1,s,d,h);
  printf("%c -> %c\n",s,d);

  tower(n-1,h,s,d);

  return;

}


void noOfsteps(int n){

int power=1;

for(int i=1;i<=n;i++){
power = power*2;
}
 power = power - 1;

printf("Number of steps are :%d",power);

}

int main () {

int n;
printf("Enter number of disks:");
scanf("%d",&n);

tower(n ,'A','B','c');

noOfsteps(n);

    return 0;
}