#include <stdio.h>
#include <string.h>

int main(){
    struct book{
        char name[50];
        int noOfpages;
        float price;
    } a,b,c;

    a.noOfpages = 100;
    a.price=411.5;

    // a.name = "Secret seven";  // we can not intialize it like this 
    // printf("%s",a.name);
     
      strcpy(a.name,"Maths");  // means give the string value to the a.name variable;
      printf("Name of book: %s\n",a.name);
      printf("Number pages :%d\n",a.noOfpages);
      printf("Price of book: %.2f RS\n\n",a.price);

    b.noOfpages = 200;
    b.price = 100.4;
      strcpy(b.name,"Physics");
      printf("Name of book: %s\n",b.name);
      printf("Number pages :%d\n",b.noOfpages);
      printf("Price of book: %.2f RS\n\n",b.price);

    c.noOfpages=300;
    c.price=249.3;
      strcpy(c.name,"Bio");
      printf("Name of book: %s\n",c.name);
      printf("Number pages :%d\n",c.noOfpages);
      printf("Price of book: %.2f RS\n\n",c.price);


    return 0;
}