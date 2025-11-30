#include <stdio.h>
int main () {

    int a,b,c;

    printf("Enter the value of a:\n");
    printf("Enter the value of b:\n");
    printf("Enter the value of c:");

    scanf("%d %d %d " ,&a, &b,&c);

    if (a>b) 
        printf("A>B");
    
    else  
         printf("A<B");
        

        if(b>c) 
            printf("b>c");
        
        else 
            printf("B<C");
        
            
            if(c>a) 
                printf("C>A");

            
            else 
                printf("C<A");

            
            return 0;
}