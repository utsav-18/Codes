#include<stdio.h>
#include <stdlib.h>
#include <time.h>

# define TOTALNUMBER 10 
int main () {

float randvalue;
int i;

srand(time(NULL));   // this generates the first "seed" value;

for(i=1;i<=TOTALNUMBER;i++){

    randvalue = rand();
    printf("%.0f\n",randvalue);

}

return 0;


}

  /*

  Notice that in line 11

11 srand(time(NULL)): this generates the first seed.

value 

srand() 's argument function is a call to the time() function with a NULL argument. NULL argument causes time ()
 
 to read the computer's internal clock time, in seconds. The srand() function then uses this time to initialize the rand()
 
  random-number gene function." Once rand() has been initialized, the

for loop in lines 13 through 17, repeated belo calls this function 10 times, with each call producing a new random number.

14

13 for (int i = 1; i < N; i++) /* this generates N random numbers.

15 randvalue = rand();

16 printf("%f\n", randvalue);


*/