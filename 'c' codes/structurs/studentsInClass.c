#include <stdio.h>
#include<string.h>

int main() {

typedef struct Student{
    char name[10];
    int class;
    char sec;
    float marks;
    
} student;

student arr[3];

strcpy(arr[0].name,"Utsav");
arr[0].class=10;
arr[0].sec='A';
arr[0].marks=90.6;

strcpy(arr[1].name,"Manish");
arr[1].class=10;
arr[1].sec='B';
arr[1].marks=90;

strcpy(arr[2].name,"Muskan");
arr[2].class=10;
arr[2].sec='C';
arr[2].marks=90.7;

for (int i=0;i<3;i++){
    
   printf("Name = %s\n",arr[i].name);
      printf("Class = %d\n",arr[i].class);
         printf("Section = %c\n",arr[i].sec);
            printf("Name = %.2f\n\n",arr[i].marks);

}


    return 0;

}