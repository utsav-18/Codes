#include<iostream>
    using namespace std;

        class vehicle{
            public:
            string name;
            int gear;
            int w;
            void printv(){
                cout<<"Name : "<<name<<endl;
                cout<<"gear : "<<gear<<endl;
            }
        };

        class bike : public vehicle {
            public:
                int price;
                void printb(){
                    cout<<"Name : "<<name<<endl;
                    cout<<"price : "<<price<<endl;
                }
        };

            int main(){
                 bike honda;
                 honda.name="HONDA";
                 honda.price=720000;
                 honda.printb();
            }
    
