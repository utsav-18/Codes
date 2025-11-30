#include <stdio.h>
#define Pi 3.14159265359
#define area(r) (Pi*r*r)    // by using this ;

// float area(float r){     // we can replace this;

// return Pi*r*r;

// }


int main() {

//printf("%.11f",Pi);

 float ans = area(10);

printf("%f",ans);


    return 0;
}