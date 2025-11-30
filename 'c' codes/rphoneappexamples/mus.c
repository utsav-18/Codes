#include <stdio.h>
int main () {

int a;
printf("Enter row :");
scanf("%d",&a);


for(int i=0;i<=a;i++){

    for(int j=a-i;j>=0;j--){
    

printf("*");

    }

for(int k=0;k<i*2;k++){
     printf(" ");
}

for (int l=a-i;l>=0;l--){
    printf("*");
}

  printf("\n");
    
    }


    return 0;

}