#include <stdio.h>
int main () {

int t ;

printf("Enter the integer :");
scanf("%d" ,&t);

for (int i = 1; i<=10;i++) {

    printf("%d * %d = %d\n" , t,i, t*i);
}

return 0;

}