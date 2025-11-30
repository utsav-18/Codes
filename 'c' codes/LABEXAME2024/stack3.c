#include<stdio.h>
#define MAX 10
    int stack[MAX];
    int top = -1;

    int isEmpty(){
        return top==-1;
    }
    int isFull(){
        return top == MAX-1;
    }

void push(int data){
    if(isFull()){
        printf("Full");
    }
    else {
        stack[++top] = data;  // Corrected line
        printf("%d added\n", data);
    }
}


    void pop(){
        if(isEmpty()){
            printf("Empty!");
        }
        else {
            printf("%d popped\n",stack[top--]);
        }
    }

    void peek(){
        if(isEmpty()){
            printf("Empty!");
        }
        else {
            printf("%d is on top now\n",stack[top]);
        }
    }

    int main(){
        push(10);
        push(20);
        push(30);
        peek();
        pop();
        pop();
        peek();

    }