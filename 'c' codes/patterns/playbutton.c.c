#include <stdio.h>
int main () {

  int n ;

 printf("Enter the value of rows :");
 scanf("%d",&n);



 
 for ( int i =1;i<=n;i++){
    
    for(int j = 1;j<=i;j++){
        
        if(i+j<=n+1)
        printf("* ");
    }

      printf("\n");
 }     



 



    return 0;

}