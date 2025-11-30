#include <stdio.h>
int powerlog(int a,int b){

if(b==0) return 1;
if(b==1) return a;

if (b%2==0){

 return powerlog(a,b/2)*powerlog(a,b/2);  // even case ;
}

else {
    return powerlog(a,b/2)*powerlog(a,b/2) * a;   //odd case;
}

}

int main () {

int a ,b;

printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d",&b);

int p = powerlog(a,b);

printf("%d ^ %d is:%d",a,b,p);

    return 0;

}