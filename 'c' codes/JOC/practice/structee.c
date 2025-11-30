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

   struct man a[2];



   for(int i=0;i<2;i++){

   
    printf("Enter name: ");
    fgets(a[i].n,sizeof(a[i].n),stdin);
   

    printf("Enter hieght: ");
    scanf("%d",&a[i].h);
    getchar();

    printf("Enter weight: ");
    scanf("%d",&a[i].w);
    getchar();

    printf("Entre mark: ");
    scanf("%d",&a[i].m);
    getchar();

    printf("Entre section: ");
    scanf("%c",&a[i].s);
    getchar();
    printf("\n");

   }






for(int i=0;i<2;i++){


printf("Name: %s\n",a[i].n);
printf("height : %d\n",a[i].h);
printf("weight: %d\n",a[i].w);
printf("Mark : %d\n",a[i].m);
printf("section : %c\n",a[i].s);


}

    return 0;
}





