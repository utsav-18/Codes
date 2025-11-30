#include <stdio.h>
    int main() {

        struct student{

            char name[100];
            int age;
            char gd;

        };

        struct student s[2];

        for(int i=0;i<2;i++){
            printf("Enter name: ");
            fgets(s[i].name,sizeof(s[i].name),stdin);
            printf("Enter age: ");
            scanf("%d",&s[i].age);
            getchar();
            printf("Enter grade: ");
            scanf("%c",&s[i].gd);
            getchar();
            printf("\n");
        }

        for(int i=0;i<2;i++){
            printf("Name: %s\n",s[i].name);
            printf("Age: %d\n",s[i].age);
            printf("Grade: %c\n\n",s[i].gd);
            


        }


        return 0;

    }