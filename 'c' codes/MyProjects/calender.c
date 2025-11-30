#include <stdio.h>
#include<string.h>

typedef struct calender {
     
     char month[20]; 
     char week[50];
     int day[31];

}calender;



int main () {

  calender january;

 strcpy(january.week,"Sunday");

printf("%s\n",january.week);

  for(int i =0;i<=31;i=i+7){
     january.day[i]=i;
    printf("%d\n", january.day[i]);
   }


return 0;


}

  
