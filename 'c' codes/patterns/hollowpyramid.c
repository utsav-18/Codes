#include <stdio.h>
int main () {

int n;
printf("n:");
scanf("%d",&n);

  for (int i = 1; i <= n; i++) {

        // Print spaces for the left pyramid

        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Print '*' for the top edge of the pyramid

        for (int j = 1; j <= i * 2 - 1; j++) {

           if (j == 1 || j == i * 2 - 1 || i == n) {

                printf("*");

           }
            
             else {
                printf(" ");
            }
        
        
        }
    
printf("\n");

}


    return 0;
}