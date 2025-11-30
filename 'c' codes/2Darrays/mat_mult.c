#include <stdio.h>
int main () {

int mat1[2][2]={{1,2},{3,4}};
int mat2[2][2]={{5,6},{7,8}};
int mat3[2][2];
int cr=2;

// 1 2    5 7     =>  1*5+2*7    3*5+4*7     =>  19  22
// 3 4    6 8     =>  1*6+2*8    3*6+4*8     =>  43  50


for (int i=0;i<2;i++){

    for (int j=0;j<2;j++){
              
          mat3[i][j]=0;

          for(int k=0;k<cr;k++){

            mat3[i][j]= mat3[i][j]+mat1[i][k]*mat2[k][j];
            
           }

         }
      
       }

for (int i=0;i<2;i++){

  for (int j=0;j<2;j++){
              
      printf("%d ",mat3[i][j]);
          
}

 printf("\n");

       }

       return 0;


}