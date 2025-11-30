#include <stdio.h>
    int main(){

        struct st {

            char name[50];
            int age;
            int class;
            char grade[10];


        };

    struct st student[3];

        for(int i=0;i<=3;i++){
            printf("Entre name: ");
            fgets(student[i].name,sizeof(student[i].name),stdin);

            printf("Enter age: ");
            scanf("%d",&student[i].age);
             getchar();

            printf("Entre class: ");
            scanf("%d",&student[i].class);
             getchar();

            printf("Enter Grade: ");
            scanf("%s",student[i].grade);
             getchar();


        }


         for(int i=0;i<=3;i++){
            printf("Name: %s",student[i].name);
  
            printf("Age: %d",student[i].age);

            printf("Class: %d",student[i].class);
            

            printf("Grade: %s",student[i].grade);

        }

        return 0;

    }