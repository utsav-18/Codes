#include <iostream>
    using namespace std;
        class Parent{
            public:
            int id_p;
            void printID_P(){
                cout<<"Base ID: "<<id_p<<endl;
            }
        };
            class child : public Parent{
                public:
                int id_c;
                void printID_c(){
                    cout<<"Child ID: "<<id_c<<endl;
                }
            };

            int main() {
                child obj1;
                obj1.id_p=7;
                obj1.printID_P();
                obj1.id_c=91;
                obj1.printID_c();
                return 0;
            }