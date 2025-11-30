#include <stdio.h>
int main () {
 
 int m,n;
printf("Enter row:");
scanf("%d",&m);
printf("Enter column:");
scanf("%d",&n);

int mat[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
    }
} 
  printf("\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
} 
 printf("\n");

//

int minr =0;         // minimum row;
int maxr = m-1;       // max row; 
int minc =0;         // minimum column;
int maxc=n-1;        // max column;
int tne = m*n;       // total no. of elements;
int count =0;

while(count<tne){
    // print the minimum row;

    for(int j = minc;j<=maxc;j++){
          printf("%d ",mat[minr][j]);
          count++;

    }
 
 minr++;

  // print the maximum column;
  for(int i=minr;i<=maxr;i++){
          printf("%d ",mat[i][maxc]);
          count++;
  
  }
  
  maxc--;
   
   // print the maximum row;
   for(int j=maxc;j>=minc;j--){
       printf("%d ",mat[maxr][j]);
       count++;
   }
   
   maxr--;
  
   //print the minimum column;
   for(int i= maxr;i>=minr;i--){
       printf("%d ",mat[i][minc]);
       count++;
   }
  
   minc++;

}


 return 0;
}
