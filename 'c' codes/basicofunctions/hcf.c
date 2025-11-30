#include <stdio.h>

int gcd(int a , int b){
int hcf ;
for (int i=1;i<=(a,b);i++){
    if(a%i==0 && b%i==0){
        hcf =i;

    }
}
return hcf;
}

int main () {

int a,b;
printf("a:");
scanf("%d",&a);

printf("b:");
scanf("%d",&b);

int hcf = gcd(a,b);

printf("hcf of %d and %d is : %d",a,b,hcf);

   return 0;
}