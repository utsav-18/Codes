#include <stdio.h>
int main () {

int n;
printf("Enter the number of students :");
scanf("%d",&n);

int arr[n][3];

printf("Entre  marks :");

for (int i=0;i<n;i++){

         for(int j=0;j<3;j++){

          scanf("%d",&arr[i][j]);
            
          printf("%d ",arr[i][j]);
        
      }

  }


    return 0;

}