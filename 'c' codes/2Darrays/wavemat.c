#include <stdio.h>
int main () {


int a,b;
printf("Enter row:");
scanf("%d",&a);
printf("Enter column:");
scanf("%d",&b);

int mat[a][b];

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          
          printf("Entre mat[%d][%d]=>",i,j);
          scanf("%d",&mat[i][j]);
          
    }
}
printf("\n");

// displaying the formed matrix .

 printf("Formed matrix mat1[][] is :\n");

for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
          printf("%d ",mat[i][j]);
          
    }
    printf("\n");
}

 printf("\n");

 

for(int i=0;i<a;i++){
      if(i%2==0){
         for(int j=0;j<b;j++){
         printf("%d ",mat[i][j]);

    }
  }

else {
        for(int j=b-1;j>=0;j--){
          printf("%d ",mat[i][j]);
        }
}
  
 
}

  return 0;
}