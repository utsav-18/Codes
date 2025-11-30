#include <stdio.h>
int main () {

int x;

printf("Enter how many times you wanted to print jai shree ram :");
scanf("%d" ,&x);

for(int i =1; i<=x; ++i) {            // i++ means => ( i = i + 1 )
    printf("JAI SHREE RAM \n");
}


return 0;
}