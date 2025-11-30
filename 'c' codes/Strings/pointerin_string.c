#include<stdio.h>
#include<string.h>
int main() {

char* ptr ="I AM IRON MAN";
 
  printf("%s\n",ptr);
  printf("%p\n",ptr);  // it will give two different addresses;

  ptr = "I AM GROOT";  // using this we change the string;  
  
  printf("%s\n",ptr);
  printf("%p\n",ptr);  // it will give two different addresses;

 
    return 0;

    
}