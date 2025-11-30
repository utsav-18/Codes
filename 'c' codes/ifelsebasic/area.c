#include <stdio.h>
int main () {

int l,b;

printf("Entre length:\n");
printf("Entre breadth:");
scanf("%d %d",&l,&b);

int a = l*b;
int p = 2*(l+b);

if (a>p) {
    printf("Area is greater:");
    
}
else if(p>a) {
printf("Perimeter is greater :");
}

    return 0 ;
}