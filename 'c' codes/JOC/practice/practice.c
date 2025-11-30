// pass structer in function
// use strcmp;
//nesting;


// for loop should start from 0;


#include <stdio.h>
#include <string.h>

    struct man{
        
        char n[50];
        int h;
        int w;
        int m;
        char s;
        
    };

int main () {

   struct man a1;

    printf("Enter name: ");
    fgets(a1.n,sizeof(a1.n),stdin);
   

    printf("Enter hieght: ");
    scanf("%d",&a1.h);
    getchar();

    printf("Enter weight: ");
    scanf("%d",&a1.w);
    getchar();

    printf("Entre mark: ");
    scanf("%d",&a1.m);
    getchar();

    printf("Entre section: ");
    scanf("%c",&a1.s);
    getchar();
    printf("\n");

struct man a2;
   
    printf("Enter name: ");
    fgets(a2.n,sizeof(a2.n),stdin);
   

    printf("Enter hieght: ");
    scanf("%d",&a2.h);
    getchar();

    printf("Enter weight: ");
    scanf("%d",&a2.w);
    getchar();

    printf("Entre mark: ");
    scanf("%d",&a2.m);
    getchar();

    printf("Entre section: ");
    scanf("%c",&a2.s);
    getchar();



printf("Name: %s\n",a1.n);
printf("height : %d\n",a1.h);
printf("weight: %d\n",a1.w);
printf("Mark : %d\n",a1.m);
printf("section : %c\n",a1.s);
    printf("\n");
printf("Name: %s\n",a2.n);
printf("height : %d\n",a2.h);
printf("weight: %d\n",a2.w);
printf("Mark : %d\n",a2.m);
printf("section : %c\n",a2.s);


    return 0;
}





