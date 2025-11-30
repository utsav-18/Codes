#include <stdio.h>
int main () {

int arr[2][3]={{9,8,7},{6,5,4}};

// arr[0][0]=9;
// arr[0][1]=8;
// arr[0][2]=7;
// arr[1][0]=6;
// arr[1][1]=5;
// arr[1][2]=4;

 for (int i=0;i<2;i++){

         for(int j=0;j<3;j++){
          
      // printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
          printf("%d ",arr[i][j]);
        
      }
         printf("\n");
  }


    return 0;
}