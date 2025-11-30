#include <stdio.h>
int main () {

int a,b;
printf("Enter row:");
scanf("%d",&a);
printf("Enter column:");
scanf("%d",&b);

// format1ion of matrix 1 by taking user input  .

int mat1[a][b];

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          
          printf("Entre mat1[%d][%d]=>",i,j);
          scanf("%d",&mat1[i][j]);
          
    }
}

// displaying the formed matrix 1 .

 printf("Formed matrix 1 is :\n");

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat1[i][j]);
          
    }
    printf("\n");
}

printf("\n");

// format1ion of matrix 2 by taking user input  .

int c,d;
printf("Enter row:");
scanf("%d",&c);
printf("Enter column:");
scanf("%d",&d);

int mat2[c][d];

for(int i=0;i<c;i++){

    for(int j=0;j<d;j++){
          
          printf("Entre mat2[%d][%d]=>",i,j);
          scanf("%d",&mat2[i][j]);
          
    }
}
printf("\n");



// displaying the formed matrix 2 .

 printf("Formed matrix 2 is :\n");

for(int i=0;i<c;i++){

    for(int j=0;j<d;j++){
          printf("%d ",mat2[i][j]);
          
    }
    printf("\n");
}

 printf("\n");

 // checking wether in between two matrix column of mat1 == row of mat2 or not;

 if(b==c)   {

  printf("mat1[][] * mat2[][] => \n");

int mat3[a][d];

int cr=b;     // cr=a  column and row which are equal

for (int i=0;i<a;i++){

    for (int j=0;j<d;j++){
              
          mat3[i][j]=0;

          for(int k=0;k<cr;k++){

            mat3[i][j]= mat3[i][j]+mat1[i][k]*mat2[k][j];
            
           }

         }
      
       }

for (int i=0;i<a;i++){

  for (int j=0;j<d;j++){
              
      printf("%d ",mat3[i][j]);
          
}

 printf("\n");

       }

 }

 else {
    printf("column of mat1 is not equal to row of mat2");
 }      


    return 0;

}