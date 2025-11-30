#include <stdio.h>
#include <string.h>

    int main() {


struct student{

    char name[100];
    int id;
    char sub[100];
    int sem;

};

struct student s1;

    strcpy(s1.name,"Utsav raj");
    s1.id=032;
    strcpy(s1.sub,"Joc");
    s1.sem=2;



printf("Name: %s\n",s1.name);
printf("Id: %d\n",s1.id);
printf("Subject: %s\n",s1.sub);
printf("sem: %d\n",s1.sem);


        return 0;


    }