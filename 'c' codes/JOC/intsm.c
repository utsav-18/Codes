#include <stdio.h>
int main() {
    int n ;
    scanf("%d",&n);

    int ld,sum = 0;

while (n > 0) {

         ld=n%10;
        sum= sum+ld;
        n =n/10;

    }

// for(int i=0;i<n;i++){

//          ld=n%10;
//         sum= sum+ld;
//         n = n/10;

//     }

printf("Sum : %d\n",sum  );

    return 0;
}