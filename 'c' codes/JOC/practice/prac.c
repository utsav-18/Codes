#include <stdio.h>
int main() {

    int x;
    printf("Enter x:");
    scanf("%d",&x);


int a=0,b=0,c=1;

    for(int i=0;i<=x;i++){
        printf("%d",c);

        a=b;
        b=c;
        c=a+b;

    }

    return 0;

}