#include <stdio.h>
#include <string.h>

int main () {

struct man{
    char name[100];
    int age;
    int salary;

};

    struct man man1;
    strcpy(man1.name,"sahil");
    man1.age=20;
    man1.salary=9900000;


struct women{

    struct man female;

char ability[100];
    
 };

  struct women women1;  

    strcpy(women1.female.name,"ayushi");
        women1.female.age=18;
        women1.female.salary=8900;
    strcpy(women1.ability,"Crying");  //*


printf("%s\n",man1.name);
printf("%d\n",man1.age);
printf("%d\n",man1.salary);


printf("%s\n",women1.female.name);
printf("%d\n",women1.female.age);
printf("%d\n",women1.female.salary);
printf("%s\n",women1.ability);

    return 0;

}