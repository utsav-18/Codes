#include <stdio.h>

int sum(int x){

    
    if(x==0) return 0; 
    return x+sum(x-1);

}

    int main(){

int n;
printf("N:");
scanf("%d",&n);

int a = sum(n);

printf("%d",a);

 return 0;

    }