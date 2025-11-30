#include <stdio.h>
#define MAX 4

int stack[MAX];
int top = -1;
int size=0;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

void push(int item) {
    if (isFull()) {
        printf("Stack overflow!\n");
    } else {
        stack[++top] = item; // First increment top, then assign item
        printf("%d pushed to stack\n", item);
        size++;
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
        return -1; // Return a default value on underflow
    } else {
        return stack[top--];
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1; // Return a default value if stack is empty
    } else {
        return stack[top];
    }
}

int main() {
    while (1) {
        int choice;
        int element;

        printf("Enter your choice: \n1>Push\n2>Pop\n3>Peek\n4>Show\n0>Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);  // Push the actual element entered by user
                break;

            case 2:
                printf("Popped %d from stack!\n", pop());
                break;

            case 3:
                printf("Top element is %d\n", peek());
                break;
            case 4:printf("Elements are : \n");
                for(int i=0;i<size;i++){
                    printf("%d ",stack[i]);
                }
                printf("\n");
            break;
            case 0:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
