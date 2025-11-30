#include <iostream>
    using namespace std;

        class Player{   //user defined data type;
            public:
            int score;
            int age;
        };

        int main() {
            Player amit;
            amit.score = 90;
            amit.age = 20;

            Player utsav;
            utsav.score = 93;
            utsav.age = 19; 

            cout<<"Amit: "<<amit.score<<endl;
            cout<<amit.age<<endl;
            cout<<"Utsav: "<<utsav.score<<endl;
            cout<<utsav.age<<endl;
        }