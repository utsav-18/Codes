#include <stdio.h>
#include <string.h>

// function for calculating average runs;

int runs(int run[5]){
    float average,sum=0;
 
for(int i=0;i<5;i++){
     sum=sum+run[i];
}

average=sum/5;

return average;

return 0;

}

//main function;

int main() {

   int sum=0;

 struct cricketer {
    char name[20];
    int age ;
    int noOfmatches;
    float averageRuns;

}cricketer;

struct cricketer arr[3];

//1 player; 

strcpy(arr[0].name,"Utsav");
arr[0].age=19;
arr[0].noOfmatches= 5;

int run1[5]={12,15,45,50,99};

arr[0].averageRuns=runs(run1);

//2 player; 

strcpy(arr[1].name,"Aman");
arr[1].age=19;
arr[1].noOfmatches= 5;

int run2[5]={11,0,45,59,90};

arr[1].averageRuns=runs(run2);

//3 player; 

strcpy(arr[2].name,"Raj");
arr[2].age=20;
arr[2].noOfmatches= 5;

int run3[5]={5,5,4,3,100};

arr[2].averageRuns=runs(run3);

// for printing information;

for (int i=0;i<3;i++){
    
   printf("\nCricketer Name = %s\n",arr[i].name);
      printf("Age = %d\n",arr[i].age);
         printf("No Of matches = %d\n",arr[i].noOfmatches);
            printf("Average Runs = %0.2f\n",arr[i].averageRuns);
            printf("\n");

}


    return 0;

}

//complete
