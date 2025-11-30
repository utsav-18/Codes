#include <stdio.h>
int main() {

int n;              // take odd number;
printf("Enter n:");
scanf("%d",&n);

if(n%2==0) n++;      // if user is taking even number then it will make it odd;



for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
       
   if( i==j || i+j==n+1 ) printf("* ");
   else printf("  ");
   
    }
printf("\n");

}

    return 0;
}