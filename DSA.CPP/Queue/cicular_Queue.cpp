// #include <iostream>
// #include <vector>
// using namespace std;

// class queue{
//     public:

//     int front;
//     int rear;
//     int size;
//     vector<int>arr;
//     queue(int data){
//         front=0;
//         rear=0;
//         size=0;
//         vector<int>v(data);
//         arr= v;
//     }
//         void push(int data){
//             if(rear==5) {
//                 cout<<"Queue is full"<<endl;
//                 return;
//             }
//             arr[rear]=data;
//             rear++;
//             size++;

//         }

//         void pop(){
//             if(size==0){
//                 cout<<"Queu is Empty"<<endl;
//                 return;
//             }
//             front++;
//             size--;
//         }

//         int frontElement(){
//             if(size==0){
//                 cout<<"Queu is Empty"<<endl;
//                 return -1;
//             }
//             return arr[front];
//         }

//         int rearElement(){
//             if(size==0){
//                 cout<<"Queu is Empty"<<endl;
//                 return -1;
//             }
//             return arr[rear-1];
//         }

//         int size_ofQueu(){
//             return size;
//         }
//         bool empty(){
//             if(size==0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         void display(){
//             for(int i=front;i<rear;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

//     int main() {
//         queue q(5);
//         q.push(10);
//         q.push(20);
//         q.push(30);
//         q.push(40);
//         q.push(50);
//         q.display();
//         q.pop();
//         q.pop();
//         q.display();
//         q.push(60);
//         q.push(70);
//         q.display();
//         q.push(80);
//         q.display();

//         //it have problems wastage of space;
        
//     }


#include <iostream>
#define SIZE 5  // Define the maximum size of the queue

using namespace std;

class CircularQueue {
private:
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if the queue is full
    bool isFull() {
        return ((rear + 1) % SIZE == front);
    }

    // Enqueue operation (insert an element)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Inserted " << value << " into queue." << endl;
    }

    // Dequeue operation (remove an element)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Removed " << arr[front] << " from queue." << endl;
        if (front == rear) { // If only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    // Display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

// Main function to demonstrate Circular Queue
int main() {
    CircularQueue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // Queue is full after this

    q.display();
    
    q.dequeue();
    q.dequeue();
    
    q.enqueue(60);  // Reuses space
    q.enqueue(70);  // Reuses space
    
    q.display();
    
    return 0;
}
