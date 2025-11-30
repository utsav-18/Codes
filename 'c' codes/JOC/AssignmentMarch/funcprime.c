#include <stdio.h>

void check(int n){

   if(n<2 && n>=0) printf("Not a prime number ");
   if (n==2)  printf("%d a prime number ",n);
   else {

    for(int i=2;i<n;i++){
    
         if(n%i==0) printf("%d is a composite number",n);
         

         else printf("%d is a prime number",n);
         break;

       }
  }
   
}

int main(){
   
   int num;
   printf("Enter a number:");
   scanf("%d",&num);

check(num);

    return 0;

}