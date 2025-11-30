#include <stdio.h>
    int main () {

struct student{

char name[100];
int sem;
int mark;
char result[100];

};


struct student s[2];

for(int i=1;i<=2;i++){

    printf("Enter name:");
    fgets(s[i].name,sizeof(s),stdin);
    
    printf("Enter sem:");
    scanf("%d",&s[i].sem);
    getchar();
    
    printf("Enter mark:");
    scanf("%d",&s[i].mark);
    getchar();
    
    printf("Enter result:");
    fgets(s[i].result,sizeof(s),stdin);
    
    printf("\n");

}

for(int i=1;i<=2;i++){

    printf("Name: %s\n",s[i].name);
    printf("Sem: %d\n",s[i].sem);
    printf("Marks: %d\n",s[i].mark);
    printf("Result: %s\n",s[i].result);
    
}


        return 0;

    }