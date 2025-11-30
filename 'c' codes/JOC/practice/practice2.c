#include <stdio.h>
#include <string.h>

int main () {

struct car {
    char name[100];
    int ID;
    char model[100];


};


struct car c[3];

for(int i=0;i<3;i++){

    printf("Enter name: ");
    fgets(c[i].name,sizeof(c[i].name),stdin);

    printf("Enter Id: ");
    scanf("%d",&c[i].ID);
    getchar();


    printf("Enter model: ");
    fgets(c[i].model,sizeof(c[i].model),stdin);

    printf("\n");

}

for(int i=0;i<3;i++){

    printf("Name: %s\n",c[i].name);
     printf("Id: %d\n",c[i].ID);
     printf("Model: %s\n",c[i].model);
    printf("\n");

}



    return 0;

}