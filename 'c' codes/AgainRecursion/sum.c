#include <stdio.h>
#include <math.h>

int sum(int x){

    if(x>0) return x+sum(x-1);


}

int main () {

    int n;
    printf("n:");
    scanf("%d",&n);


    int ans =sum(n);

    printf("%d",ans);

return 0;

}