#include<stdio.h>
#include<string.h>


typedef struct student{
  char name[20]; 
  int roll;
  int Jyear;
  char course[30];
  char department[30];
}student ; 

// void fun(student x,student y)
// {

// if(a.department==b.department) printf("Same department: %s",a.department);  // mistake;
// else printf("Diff department");

//  return;
// }

void fun(student x, student y) {
    if (strcmp(x.department, y.department) == 0)
        printf("Same department: %s\n", x.department);
    else
        printf("Different department\n");

    return;
}

int main() {

student a;
strcpy(a.name,"Utsav raj");
a.roll =032;
a.Jyear = 2023;
strcpy(a.course,"Btech");
strcpy(a.department,"Information Technology");

student b;
strcpy(b.name,"Raju");
b.roll =013;
b.Jyear = 2023;
strcpy(b.course,"Btech");
strcpy(b.department,"Information Technology");

fun( a, b);


return 0;
}