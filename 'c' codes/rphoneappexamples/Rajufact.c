// #include <stdio.h>

// int main() {
//     int num;
//     unsigned long long fact = 1;
    
//     printf("Enter a number to calculate its factorial: ");
//     scanf("%d", &num);
    
//     if (num < 0) {
//         printf("Factorial of negative integers isn't defined.\n");
//         return 0;
//     }
    
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }
    
//     printf("Factorial of %d is: %llu\n", num, fact);
    
//     return 0;
// }

// WAP to print series of prime number till n term

#include <stdio.h>
#include <math.h>  

int main() {
    int n, i, j, flag;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Prime numbers till %d are: ", n);
    
    for (i = 2; i <= n; i++) {

    flag = 0;
    
    for (j = 2; j <= sqrt(i); j++) {
        if (i % j == 0) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0) {
        printf("%d ", i);
    	 }
	 }
    
    return 0;
}
