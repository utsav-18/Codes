#include <iostream>
    using namespace std;

        class Player{   
            public:
            int score;
            int age;
            string name;
        };

        int main() {
            Player amit;
            amit.score = 90;
            amit.age = 20;

            Player utsav;
            utsav.name="Utsav Raj";
            utsav.score = 93;
            utsav.age = 20; 
            
            Player manish;
            manish.name="Manu";
            manish.score = 85;
            manish.age = 20; 
            
            Player players[3]={amit,utsav,manish};

            cout<<"Name: "<<players[0].name<<endl;
            cout<<"Score: "<<players[0].score<<endl;
            cout<<"Age: "<<players[0].age<<endl;
            

            // cout<<"Amit: "<<amit.score<<endl;
            // cout<<amit.age<<endl;
            // cout<<"Utsav: "<<utsav.score<<endl;
            // cout<<utsav.age<<endl;
        
        }