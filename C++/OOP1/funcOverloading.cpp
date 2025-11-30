#include <iostream>
using namespace std;

    // int add(int a,int b){
    //     return a+b;
    //  }
    //   double add(int a,double b){
    //     return a+b;
    //     }
    //     int add(int a,int b,int c){
    //         return a+b+c;
    //         }

    void calculateArea(int l,int b){
            cout<<l*b<<endl;
    }
        void calculateArea(int s){
            cout<<s*s<<endl;
        }
            void calculateArea(float s){
                cout<<3.14*s*s<<endl;
            }

        int main() {
            // cout<<add(2,2)<<"\n";
            // cout<<add(2,2,2)<<"\n";
            // cout<<add(2,2.2);
           cout<<"Rectangle: ";
           calculateArea(5,5);
            cout<<"Square: ";
            calculateArea(8);
             cout<<"Circle: ";
             calculateArea(3);

        }

