#include <stdio.h>
int main () {

  int n ;
  int nst=5;
  int nsp=1;

 printf("Enter the value of rows :");
 scanf("%d",&n);                            

for (int i=1;i<=n*2+1;i++){
    int a=1;

         for(int j=1;j<=nst;j++){


        printf("%d",a);
        a++;
        
        }
               for (int k = 1;k<=nsp;k++){


                  printf(" ");
                  a++;
                 }  

                        for(int j=1;j<=nst;j++){


                             printf("%d",a);
                             a++;
                        }

                        nst--;
                       
                        
                        nsp+=2;
                                 printf("\n");
        

}

    return 0;

}