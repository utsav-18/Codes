#include <stdio.h>
int main () {

int n1,n2,n3;
printf("Enter n1,n2,n3: ");
scanf("%d %d %d",&n1,&n2,&n3);


if (n1>n2 && n1>n3) 

     printf("n1 is big");

// if (n2>n1 && n2>n3) printf("n2 is big");
// if (n3>n1 && n3>n2) printf("n3 is big");

else if(n2>n1 && n2>n3) 

      printf("n2 is big");

else{
      
      printf("n3 is bigger");
}


   return 0;

}

