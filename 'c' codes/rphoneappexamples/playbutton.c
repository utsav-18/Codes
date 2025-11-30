#include<stdio.h>
int main() {
int row=14;    

//printf("Enter row:");
//scanf("%d",&row);
// try to give even numbers;

for(int i=1;i<=row;i++){

if(i<row/2) {
    for(int j=1;j<=i;j++){

      printf(" *");

    }
}

else {
        for(int j=row-i;j>0;j--){

      printf(" *");

    }
}

    printf("\n");

} 

    return 0;
    }