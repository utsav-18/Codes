#include <stdio.h>

int main() {

struct cricketer {
    char firstname[20];
    char  lastname[20];
    int age ;
    int noOfmatches;
    float averageRuns;

}cricketer;

struct cricketer arr[3];

for(int i = 0;i<3;i++){
   printf("Enter the name of the cricketer :");

    //gets(arr[i].name);
     //scanf("%[^\n]s",&arr[i].name);    // not working chaeck why;

    scanf("%s %s",&arr[i].firstname,&arr[i].lastname);
      printf("Entre age :");
       scanf("%d",&arr[i].age);
         printf("Entre Matches :");
           scanf("%d",&arr[i].noOfmatches);
             printf("Eneter average runs:");
               scanf("%f",&arr[i].averageRuns);
             printf("\n");

}

for (int i=0;i<3;i++){
    
   printf("Cricketer Name :%s %s\n",arr[i].firstname,arr[i].lastname);
      printf("Age = %d\n",arr[i].age);
         printf("No Of matches = %d\n",arr[i].noOfmatches);
           printf("Average runs: %0.2f",arr[i].averageRuns);
            printf("\n\n");
}

 return 0;

}
