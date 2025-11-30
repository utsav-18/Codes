#include <stdio.h>

void make(int x ,int n)

{

 if(x>n) return ;

 printf("%d\n",x);

 make(x+1,n);

 

    return;

}


int main () {

     int n;
     printf("Enter a number:");
    scanf("%d",&n);
    
    make(1,n);

      return 0;

}