#include <iostream>
#include <string>
    using namespace std;
        class person{
            public:
            string name;
            int age;
            int weight;

                person(string n ,int a,int w) :name(n) ,age(a) ,weight(w) {}

        };
        
        int main() {
            person p1("Utsav",20,63);
            person p2("Aman",20,54);

            cout<<"NAME: "<<p1.name<<endl;
            cout<<"AGE: "<<p1.age<<endl;
            cout<<"WEIGHT: "<<p1.weight<<endl<<endl;
            cout<<"NAME: "<<p2.name<<endl;
            cout<<"AGE: "<<p2.age<<endl;
            cout<<"WEIGHT: "<<p2.weight<<endl;
        }