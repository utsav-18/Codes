#include <stdio.h>
int main () {
    int manish , raju , utsav ;

    printf("Enter the ages :");
    scanf("%d %d %d " , &manish,&raju,&utsav);

    if( manish>raju && manish>utsav) {
        printf("manish is elder");
    }

     if (raju>manish && raju>utsav) {
        printf("raj is elder");
    }
     if ( utsav>manish && utsav>raju) {
        printf("utsav is elder");

    }
    return 0;
}