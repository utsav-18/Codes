#include <stdio.h>
int main () {

int num ;
int ld=0;
int sum =0;


printf("Entre the value :") ;
scanf("%d" , &num);

while (num>0){
    
 ld = num %10;

sum = sum + ld;

num = num/10;


}

printf("%d" ,sum );

    return 0;

}
