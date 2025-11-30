#include <stdio.h>

// Define an inner structure

struct Address {
    char city[50];
    char state[50];
};

// Define an outer structure containing the inner structure

struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {

    // Declare and initialize a variable of the outer structure type

    struct Person person1 = {"John Doe", 30, {"New York", "NY"}};

    // Access and print the members of the nested structure
    
    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Person Address: %s, %s\n", person1.address.city, person1.address.state);

    return 0;
}