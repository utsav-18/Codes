#include <stdio.h>
int main () {

int arr[4][2]={{1234,56},{1256,43},{1434,32},{1312,96}};

 for (int i=0;i<4;i++){

         for(int j=0;j<2;j++){
          
      
          printf("%d ",arr[i][j]);
        
      }
         printf("\n");
  }


    return 0;
}