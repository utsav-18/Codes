#include <stdio.h>

int fact(int x){

    if(x>1)
    return x*fact(x-1);

}

int main () {
    int n;
    scanf("%d",&n);

   int ans= fact(n);
        printf("%d",ans);

}