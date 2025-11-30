#include <stdio.h>
//#include <string.h>

int main() {

printf("Enter a string input :");

char str[50];

gets(str);

printf("Input was : %s",str);


int k=0;
int size=0;

while 
    (str[k]!='\0'){
    size++;
    k++;
    
    }
     
     printf("\nsize is: %d\n",size);

for (int i =0,j=size-1;i<=j;i++,j--){
    
    char temp = str[i];
    str[i]=str[j];
    str[j]=temp;

}



puts("The reverce string is :");
puts(str);

return 0;
}

// #include <stdio.h>
// #include <string.h>

// void reverseString(char* str) {
//     int length = strlen(str);
//     for (int i = 0; i < length / 2; i++) {
//         char temp = str[i];
//         str[i] = str[length - i - 1];
//         str[length - i - 1] = temp;
//     }
// }

// int main() {
//     char str[] = "Hello, world!";
    
//     printf("Original string: %s\n", str);
    
//     reverseString(str);
    
//     printf("Reversed string: %s\n", str);
    
//     return 0;
// }