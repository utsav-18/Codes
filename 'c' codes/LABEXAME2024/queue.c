#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

// Define the queue structure
struct queue {
    int items[MAX];
    int front;
    int rear;
};

// Initialize the queue
void initializeQueue(struct queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(struct queue *q) {
    if (q->rear == MAX - 1) {
        return 1; // Queue is full
    }
    return 0;
}

// Check if the queue is empty
int isEmpty(struct queue *q) {
    if (q->front == -1) {
        return 1; // Queue is empty
    }
    return 0;
}

// Enqueue operation
void enqueue(struct queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue.\n");
    } else {
        if (q->front == -1) { // If queue is empty, set front to 0
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = data;
        printf("%d enqueued to the queue\n", data);
    }
}

// Dequeue operation
int dequeue(struct queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1; // Return -1 to indicate the queue is empty
    } else {
        int dequeuedValue = q->items[q->front];
        if (q->front == q->rear) { // If there is only one element left in the queue
            q->front = q->rear = -1; // Reset the queue to empty state
        } else {
            q->front++; // Move front pointer to the next element
        }
        return dequeuedValue;
    }
}

int main() {
    struct queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60); // This will print that the queue is full

    // Dequeue operations
    printf("\nDequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    return 0;
}
