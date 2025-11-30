#include <stdio.h>
int main(){
   
   int n;
   printf("Entrer a number:");
   scanf("%d",&n);

   if(n<2) printf("Not a prime number ");
   if (n==2)  printf("%d a prime number ",n);
   else {

    for(int i=2;i<n;i++){
    
         if(n%i==0) printf("%d is a composite number",n);
         

         else printf("%d is a prime number",n);
         break;

       }
  }
   
    return 0;

}