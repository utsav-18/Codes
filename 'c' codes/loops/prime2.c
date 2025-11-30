// Program to find prime number using function; 
#include <stdio.h>
#include <math.h>
int checkPrimeNumber(int n) {
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    flag = checkPrimeNumber(num);
    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}

