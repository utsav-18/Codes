// #include <stdio.h>
// int main () {


// int n;
// printf("enter the hight:");
// scanf("%d",&n);


//     for (int i = 1; i <= n; i++) {

        

//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

       

//         for (int k = 1; k <= (i-1)*2+1; k++) {             // or k<= 2*i-1
//             printf("*");
//         }


//         printf("\n");
//     }

//     return 0;
// }

//  or
#include <stdio.h>
int main () {


int n;
printf("enter the hight:");
scanf("%d",&n);

int nsp=n/2;
int nst=1;

   for (int i = 1; i <= (n+1)/2; i++) {
 
   for (int j=1;j<=nsp;j++){       //spaces
       printf(" ");
   }
   for(int k =1;k<=nst;k++){          //stars
       printf("*");
   }

   nsp--;
   nst+=2;
       printf("\n");
   }


   return 0;
}