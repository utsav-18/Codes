// for reading the file;

#include <stdio.h>
int main () {
 
 FILE *ptr = fopen("UTSAV.txt","r");

char str[50];

//fgets(str,50,ptr);  // it will print only first line;

if(fgets(str,50,ptr)!=NULL); // it will print only first line;
//            |
//    (value for storage)


printf("%s\n",str);

// while(fgets(str,50,ptr)!=NULL){  // it will all;

//     printf("%s\n",str);

// }

return 0;

}