    //parameterised constructer
#include <iostream>
#include <string>
    using namespace std;
        class person{
            public:
            string name;
            int age;
                person(string n ,int a){
                 name = n;
                 age=a;
                }
        };
        
        int main() {
            person p1("Utsav",20);
            person p2("Aman",20);
            cout<<p1.name;
            cout<<endl;
            cout<<p1.age;
            cout<<endl;
            cout<<p2.name;
            cout<<endl;
            cout<<p2.age;
        }