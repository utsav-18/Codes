#include<stdio.h>
#include<string.h>
int main() {

    char str[]="I am Iorn Man!!";
     
    //  str[] =" I am not Iron Man!!";  => cant be fully changeable   
    //but using pointer we can change; (char* ptr ="hello world";)  ptr ="no hello;"


    str[0]='d';  // only you can change single value at a time


   printf("%s",str);

return 0;

}