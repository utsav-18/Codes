#include <iostream>
#include <string>
    using namespace std;
        class Bike{
            public:
            int tyreSize;
            int engineSize;

            Bike(int tyreSize,int engineSize){
                this->tyreSize=tyreSize;
                this->engineSize=engineSize;
            }

            // ~Bike(){
            //     cout<<"Destructer call !"<<endl;
            // }
        };
        
        int main() {
                Bike tvs(20,200);
                Bike honda(tvs);
                //honda = tvs;  copy constructor == call by reference;
                Bike suzuki(30,300);

                cout<<"TVS : "<<tvs.engineSize<<"  "<<tvs.tyreSize<<"\n";
                cout<<"HONDA : "<<honda.engineSize<<"  "<<honda.tyreSize<<"\n";
                cout<<"SUZUKI : "<<suzuki.engineSize<<"  "<<suzuki.tyreSize<<"\n";



        }