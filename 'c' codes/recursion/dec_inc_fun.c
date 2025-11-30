#include <stdio.h>
  void decreasing(int n){
      if(n==0) return;

     printf("%d\n",n);
      decreasing(n-1);       //print n to 1.
   return;
  
  }

  void increasing(int n){
      if(n==0) return;
        increasing(n-1);       //print 1 to n.
     printf("%d\n",n);
      
   return;
  
  }
   int main () {
  
  int n ;
  printf("n:");
  scanf("%d",&n);

  decreasing(n);
  increasing(n);
  return 0 ;

 }