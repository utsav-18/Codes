#include <stdio.h>
int main () {

int a,b;
printf("Enter row:");
scanf("%d",&a);
printf("Enter column:");
scanf("%d",&b);

// formation of matrix by taking user input  .

int mat[a][b];

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          
          printf("Entre mat[%d][%d]=>",i,j);
          scanf("%d",&mat[i][j]);
          
    }
}
printf("\n");


// displaying the formed matrix .

 printf("Formed matrix is :\n");

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat[i][j]);
          
    }
    printf("\n");
}

 printf("\n");



// Transposing the matrix.

  printf("transpose of your matrix is :\n");

for(int i=0;i<b;i++){

    for(int j=0;j<a;j++){
          printf("%d ",mat[j][i]);
          
    }
    printf("\n");
}
          


    return 0;

}