#include <stdio.h>

int main () {

int a,b;

a=3;
b=3;    // it works for only 3x3 matrix;

// formation of matrix by taking user input  .

int mat[a][b];




for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          
          printf("Entre mat[%d][%d]=>",i,j);
          scanf("%d",&mat[i][j]);
          
    }
}

// for displaying formed matrix;



 printf("Formed matrix mat1[][] is :\n");

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat[i][j]);
          
    }
    printf("\n");
}

 printf("\n");



for(int i=0;i<1;i++){
    for(int j=0;j<b;j++){
        printf("%d ",mat[i][j]);

    }
}

for(int i=1;i<b;i++){
          for(int j=b-1;j<=b-1;j++){ 
            printf("%d ",mat[i][j]);
    } 


}

for(int i=b-1;i<b;i++){
          for(int j=1;j>=0;j--){ 
            printf("%d ",mat[i][j]);
    } 


}

for(int i=1;i<=1;i++){
          for(int j=0;j<b-1;j++){ 
            printf("%d ",mat[i][j]);
    } 


}



    return 0;
}