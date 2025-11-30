#include <stdio.h>
int main () {

    int n ;

    printf("Enter the value of n :");
    scanf("%d" , &n);

int a = 100 ;

    for (int i = 1; i <=n ; i++){
         a = a -3;
        printf ("%d  ",a);
       

    }
    return 0;

}


// type n = 33
// Q>why we have to type the value of n two times ? 
// ans> because in the 7th line i was using a extra space "%d "  (<= here)   ; so i did it like this => ("%d"); 