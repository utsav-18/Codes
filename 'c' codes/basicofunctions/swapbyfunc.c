#include <stdio.h>

void swap (int a ,int b){               //     this code will not work cause a & b  are differente in this void(){; 

int temp=a;

   a=b;
   b=temp;         

   return;
}

int main () {
   
int a,b;                                // and  these main (){         *** this is called pass by value***

printf("Before swap a:\n");
scanf("%d",&a);                               



printf("Before swap b:\n");
scanf("%d",&b);

swap (a,b);
   

   printf("After swap a:%d\n\nAfter swap b:%d ",a,b);


    return 0;
}