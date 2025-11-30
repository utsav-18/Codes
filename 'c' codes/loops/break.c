#include  <stdio.h>
int main () {

int i ;
int n = 90;


for (i =4; i<=100;i++) {

    if (n%i==0) {
        printf("%d\n" , i);
        
        break;                   //if break statement will be not here then we will get multiple answer as it terminates the loop;
        
    }
} 

return 0 ;

}