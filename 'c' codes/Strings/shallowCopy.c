#include<stdio.h>
#include<string.h>
int main() {

// example of shallow copy;
//adress of 5th element will be same;

char s1[]="Utsav Raj";

char* s2=s1;
s1[5]='+';     // changing s1 value will also cange s2 value;


printf("s2=> %s\n",s2);
printf("s1=> %s",s1);
 return 0;

    // => not a deap copy : Here,s2 points to the same character
    // array and hence , change in s1 is also reflects in s2.
}