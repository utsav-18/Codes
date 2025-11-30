#include<stdio.h>
#include<string.h>
int main() {

    char s1[]="college";

    // we  need colllege;

    char *ptr= s1;

    int size=0;
   
    while (*ptr!='\0'){
        size++;
        ptr++;

    }
    
    printf("size=> %d\n",size);


return 0;

}