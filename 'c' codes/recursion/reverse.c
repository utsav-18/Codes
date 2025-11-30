// WAP to reverse a string unig recursion


#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    if (str[0] == '\0') {
        return;
    }
    
    reverseString(&str[1]);
    printf("%c", str[0]);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);;
    
    printf("Reversed string: ");
    reverseString(str);

   // strrev(str);
   // puts(str);
    
    return 0;
}

