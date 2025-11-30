#include <iostream>
#include <string>
using namespace std;
    class vehicle{
        public:
            int treSize;
            int enginSize;
            int ligth;
            string companyname;
    };
        class car: public vehicle{
            public:
            int steeringSize;
        };

        class Bike : public vehicle{
            public:
            int handleSize;
        };

            int main() {
                Bike honda;
                honda.handleSize = 5;
                honda.companyname="HERO HONDA";
                honda.ligth=1;

                cout<<"Name : "<<honda.companyname<<endl;
                cout<<"Handle size : "<<honda.handleSize<<endl;
                cout<<"Ligth : "<<honda.ligth<<endl;
            }