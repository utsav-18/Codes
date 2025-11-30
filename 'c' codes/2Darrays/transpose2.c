#include <stdio.h>
int main () {

int a,b;
printf("Enter row:");
scanf("%d",&a);
printf("Enter column:");
scanf("%d",&b);

// formation of matrix by taking user input  .

int mat1[a][b];

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          
          printf("Entre mat1[%d][%d]=>",i,j);
          scanf("%d",&mat1[i][j]);
          
    }
}
printf("\n");


// displaying the formed matrix .

 printf("Formed matrix mat1[][] is :\n");

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat1[i][j]);
          
    }
    printf("\n");
}

 printf("\n");



// Transposing the matrix.

  printf("transpose of your matrix mat1[][]is :\n");


int mat2[b][a];

for(int i=0;i<b;i++){

    for(int j=0;j<a;j++){

          mat2[i][j]=mat1[j][i];
          printf("%d ",mat2[i][j]);
          
    }
    printf("\n");
}


printf("\n");

// now you have stored the transpose value of mat1[][] in mat2[][] , So you can print it separetly;

printf(" Newly Formed matrix mat2[][] is :\n");
 
for(int i=0;i<b;i++){

    for(int j=0;j<a;j++){

          printf("%d ",mat2[i][j]);
          
    }
    printf("\n");
}


    return 0;

}