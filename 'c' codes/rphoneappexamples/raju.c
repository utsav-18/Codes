#include <stdio.h>
int main() {

// for (int i=1;i<=5;i++){

//     for(int j =1;j<=5-i;j++){

//    printf(" ");
    
//     }
    
//     for(int j =i;j>=1;j--){

//    printf("*");
         
//     }

// printf("\n");
 
//     }

// return 0;
// }

int i,j,a=0;

for ( i=1;i<=5;i++){
  
 for( j =5-a;j>=1;j--){
   
 printf(" ");
     
  }

     a++;

for(int j=1;j<=a;j++){
    printf("*");


 }
printf("\n");
}

    return 0;
}