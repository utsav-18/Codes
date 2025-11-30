#include <stdio.h>
int main () {

 int x;
 printf("Enter the value :");

scanf("%d",&x);


for ( int i=2;i<=x-1;i++) {

if ( x%i==0) {

    printf("it is composite number " , &x );
break;
   } 
else {
    printf("not a composite number ");
    break;
}



}


return 0;

}