#include <stdio.h>
int main () {

 int f = 1;
int n;

printf("Enter an integer :");
scanf("%d",&n);

for ( int i = 1 ; i <=n ; i++) {

  f =  f * i ;

}

   
 printf("%d", f );



    return 0;
}