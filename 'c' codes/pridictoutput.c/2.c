#include <stdio.h>

int main() {
  
int num ;
int c=0;

printf("Enter the value :");

scanf("%d",&num);

for(  ; num!=0; num =num/10) {

    c++;

printf("%d\n" ,c);

}



    return 0;
}
