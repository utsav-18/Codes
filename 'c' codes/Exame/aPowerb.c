#include <stdio.h>
   int power(int x,int y)
            {
    if(y<2) {
            return x;
            }

       else {
        return x*power(x,y-1);
            }
            }

    int main() {
        
        int a,b;
        printf("Enter a:");scanf("%d",&a);
        printf("Enter b:");scanf("%d",&b);

        int ans=power(a,b);

        printf("%d",ans);
        return 0;

    }