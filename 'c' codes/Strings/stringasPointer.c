#include<stdio.h>
#include<string.h>
int main() {

    char str[]="I am Iorn Man!!";
    char* ptr =  str ; // ptr now points to str[0];

    printf("%p\n",&str[0]);
    printf("%p\n",str);

    //adderes of string is equal to first word of the string.
    // thats why we are getting both values same. 
 
    //lets see a example :- 
    
    char* ptr2 ="I am not Iron Man!!";
    printf("%c\n",*ptr2);     // it will only print 1st digit value ;


      char* ptr3 ="Yes I am Iron Man!!";
    printf("%s",ptr3);     // it will only print all;
    //you cannot modify letters using pointers!!!!!

    return 0;

    
}