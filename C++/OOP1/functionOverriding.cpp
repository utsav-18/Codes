#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

int main() {
    
    Animal a;
    a.sound();
    cout<<"\n";
    Dog dexter;
    dexter.sound();


    return 0;
}
