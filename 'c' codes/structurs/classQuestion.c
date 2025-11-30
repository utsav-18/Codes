#include <stdio.h>
    int main(){

        struct diff {
            int day;
            int month;
            int year;

        };

        struct diff d[2];

        for(int i=0;i<2;i++){
            printf("Enter day: ");
            scanf("%d",&d[i].day);

            printf("Enter month: ");
            scanf("%d",&d[i].month);

            printf("Enter year: ");
            scanf("%d",&d[i].year);

            printf("\n");

        }


    int dif=0;

     if(d[1].day-d[2].day!=0) {dif=(d[1].day-d[2].day);}

     else if(d[1].month-d[2].month!=0) {dif=dif+(d[1].month-d[2].month)*30;}

      else if(d[1].year-d[2].year!=0) {dif=dif+(d[1].year-d[2].year)*365;}

     printf("%d",dif);


//need correction;


        return 0;

    }