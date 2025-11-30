#include <stdio.h>
int main () {
int a=4,b=4;
int mat1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int mat2[4][4];
// int a,b;
// printf("Enter row:");
// scanf("%d",&a);
// printf("Enter column:");
// scanf("%d",&b);

// // formation of matrix by taking user input  .

// int mat[a][b];

// for(int i=0;i<a;i++){

//     for(int j=0;j<b;j++){
          
//           printf("Entre mat[%d][%d]=>",i,j);
//           scanf("%d",&mat[i][j]);
          
//     }
// }
// printf("\n");


// // displaying the formed matrix .

 printf("\n");



// Transposing the matrix.
for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat1[i][j]);
          
    }
    printf("\n");
}

printf("\n ");


for(int i=0;i<b;i++){

    for(int j=0;j<a;j++){
        
          mat2[i][j]=mat1[j][i];
          mat2[i][0]=mat1[i][0];
          mat2[0][j]=mat1[0][j];
          
    }
}
          
 printf("Formed matrix is :\n"); 

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat2[i][j]);
          
    }
    printf("\n");
}

    return 0;

}