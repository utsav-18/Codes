#include <stdio.h>
#include <string.h>

int main () {

    struct man{
        char name[100];
        int age;
        float salary;
           };

    struct man s1;
    strcpy(s1.name,"Utsav");
    s1.age=18;
    s1.salary=102398.33;

    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%f\n",s1.salary);

    return 0;
    }