#include <iostream>
using namespace std;

class queue{
    public:

    int front;
    int rear;
    int arr[5];
    queue(){
        front=0;
        rear=0;
    }
        void push(int data){
            if(rear==5) {
                cout<<"Queue is full"<<endl;
                return;
            }
            arr[rear]=data;
            rear++;
        }

        void pop(){
            if(front-rear==0){
                cout<<"Queu is Empty"<<endl;
                return;
            }
            front++;

        }

        int frontElement(){
            if(front-rear==0){
                cout<<"Queu is Empty"<<endl;
                return -1;
            }
            return arr[front];
        }

        int rearElement(){
            if(front-rear==0){
                cout<<"Queu is Empty"<<endl;
                return -1;
            }
            return arr[rear-1];
        }

        int size(){
            return rear-front;
        }
        bool empty(){
            if(front-rear==0){
                return true;
            }
            else{
                return false;
            }
        }

        void display(){
            for(int i=front;i<rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

    int main() {
        queue q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        q.display();
        q.pop();
        q.pop();
        q.display();
        q.push(60);
        q.push(70);
        q.display();

        //it have problems wastage of space;
        
    }