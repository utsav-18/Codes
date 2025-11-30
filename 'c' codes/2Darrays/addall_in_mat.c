#include <stdio.h>
int main () {

// sum of all elements in a matrix;

int arr[3][2]={{0,1},{2,3},{4,5}};

int sum=0;

for(int i=0;i<3;i++){

    for(int j=0;j<2;j++){

        sum=sum+arr[i][j];
          
          }
}

 printf("sum of all elements in a matrix is : %d ",sum);

    return 0;
} 