#include <stdio.h>
int main () {

  int mat1[4]={1,2,2,1};
  int mat2[4];
 
           for(int i=0;i<=3;i++){
           
             mat2[i]=mat1[3-i];
                   printf("%d ",mat2[i]);
            }
           
        
  
           for(int i=0;i<=3;i++){

          if(mat2[i]==mat1[i]) printf("Palindrome\n");
          else printf("Not palindrome");
          break;

         }


    return 0;
}