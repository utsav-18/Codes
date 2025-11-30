#include <stdio.h>
int main () {

int arr[3][2]={{0,1},{2,3},{4,5}};
int brr[3][2]={{6,7},{8,9},{10,11}};

//int sum[3][2];

for(int i=0;i<3;i++){

    for(int j=0;j<2;j++){
          
        // sum[i][j]=arr[i][j]+brr[i][j];
          
           printf("%d ",arr[i][j]+brr[i][j]);
         

    }
     printf("\n");

}

    return 0;
} 