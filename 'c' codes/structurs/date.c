#include <stdio.h>
int main () {

 struct date{
   
   int date;
   int month;
   int year;

}date;

struct date a,b;

//a -> 18/4/2005
//b -> 16/10/2006

a.date=18;
a.month=4;
a.year=2005;

b.date=16;
b.month=10;
b.year=2005;

// if(a == b) printf("The dates are same");
// else printf("The dates are not same");   //  =>  not possible

// if(a.date == b.date) printf("The dates are same");
// else printf("The dates are not same");   //  => indivisually possible



if(a.date == b.date && a.month == b.month && a.year == b.year) 
printf("The dates are same") ;

else 
printf("The dates are not same");
    return 0;

}