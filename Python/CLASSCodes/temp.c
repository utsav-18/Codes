#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        return '\0'; // empty stack
    }
    return stack[top--];
}

int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(char *exp) {
    for (int i = 0; i < strlen(exp); i++) {
        char c = exp[i];
        if (c == '(' || c == '{' || c == '[') {
            push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            char topChar = pop();
            if (!isMatchingPair(topChar, c)) {
                return 0; // Not balanced
            }
        }
    }
    return top == -1; // Balanced if stack empty
}

int main() {
    char exp[100];
    printf("Enter an expression: ");
    scanf("%s", exp);

    if (isBalanced(exp)) {
        printf("The expression is BALANCED.\n");
    } else {
        printf("The expression is NOT BALANCED.\n");
    }

    return 0;
}