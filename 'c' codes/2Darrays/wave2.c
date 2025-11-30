#include <stdio.h>

int main () {
 
// 1 2 3    => 1 4 7 8 5 2  3 6 9 ;
// 4 5 6
// 7 8 9   
int mat[3][3]={1,2,3,4,5,6,7,8,9};

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
        
//           scanf("%d",&mat[i][j]);

//     }
// } 

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
        
//           printf("%d ",mat[i][j]);

//     }
//     printf("\n");

// } 
//  printf("\n");

 for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
       
        if(j%2==0)   {
                 for(int j =0;j<1;j++){
                    printf("%d ",mat[i][j]);  
                 }
        }     
       
       else  if(j%2!=0) {
             for(int i =2;i>=0;i--){
                 for(int j =1;j<=1;j++){
                    printf("%d ",mat[i][j]);  
                 }
           }
        }  
      }
 }




    return 0;

    }


        
    



