#include <stdio.h>
#include <string.h>

// Function to find the length of a string using pointers
int string_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length-1;
}

// Function to concatenate two strings using pointers
void string_concatenate(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; // Null-terminate the concatenated string
}

// Function to compare two strings using pointers
int string_compare(char *str1, char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0')
            return 0; // Strings are equal
        str1++;
        str2++;
    }
    return (*str1 - *str2); // Return the difference of the characters
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);

    printf("Length of first string: %d\n", string_length(str1));
    printf("Length of second string: %d\n", string_length(str2));

    string_concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    int result = string_compare(str1, str2);
    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("The first string is lexicographically smaller than the second string.\n");
    else
        printf("The first string is lexicographically larger than the second string.\n");

    return 0;
}
