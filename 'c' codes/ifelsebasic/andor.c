// input number is divisible by 5 and 3 or not ?
#include <stdio.h>

int main () {
    int x;
    printf("Enter a number :");
    scanf("%d" , &x);
    
    if( x%5==0 || x%3==0) {
        printf(" it is divisible: %d",x);
        
    }
    else {
        printf("it is not divisible:%d ", x);
        
    }
    
return 0;
}