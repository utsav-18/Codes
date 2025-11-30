#include <stdio.h>
int main () {

  int n ;
  int nst=10;
  int nsp=1;

 printf("Enter the value of rows :");
 scanf("%d",&n);                            

for (int i=1;i<=n*2+1;i++){
         for(int j=1;j<=nst;j++){
        printf("*");
        
        }
               for (int k = 1;k<=nsp;k++){
                  printf(" ");
                 }  

                        for(int j=1;j<=nst;j++){
                             printf("*");
                        }

                        nst--;
                       
                        
                        nsp+=2;
                                 printf("\n");
        

}

    return 0;

}