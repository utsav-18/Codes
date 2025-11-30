#include <stdio.h>

void india () { //3
    void australia();          //prototype function  : because of which oder is not important

 printf("You are in India\n");
 australia();
 return;

 }


 void england () { //1

  printf("You are in England\n");
  return;
 }


 

 void australia () { //2

 printf("You are in Australia\n");
 england();
 return;

 }


 int main (){
    india();
    return 0;
 }