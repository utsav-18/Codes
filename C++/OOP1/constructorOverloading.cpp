#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(int length) {
        this->length=length;
        width=length;
    }

    Rectangle(int length, int width) {
       this->length=length;
        this->width=width;
    }

    void display() {
        cout << "Length: " << length << "\n"<< "Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1;        
    Rectangle rect2(10);    
    Rectangle rect3(10, 20); 

    rect1.display();
    rect2.display();
    rect3.display();

    return 0;
}
