#include <stdio.h>
int main () {

int n,r=0,ld;

scanf("%d",&n);

for(int i=0;i<=n;i++){
   
 ld=n%10;

 r= r*10;
 r=r+ld;
 n=n/10;

}

printf("%d",r);

    return 0;

}