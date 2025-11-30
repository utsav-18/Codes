#include <stdio.h>
int main () {
    int x;

    printf("Enter value ");
    scanf("%d",&x);

    if(x<0) {
        int n ;
        n = x *(-1);
        printf("%d",n);
    }



    return 0;
}