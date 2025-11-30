#include <stdio.h>

    int fibbo(int n){

        if(n<=2) return 1;

        else return fibbo(n-1) + fibbo(n-2);

    }

int main(){
    int n;printf("Entre n:");scanf("%d",&n);

    printf("%d",fibbo(n));


    return 0;
}