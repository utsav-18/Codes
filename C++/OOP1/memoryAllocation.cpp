#include <iostream>
    using namespace std;

        class Player{   //user defined data type;
            public:
            int score;
            int age;
        };

        int main() {
            Player Amit;
            Amit.score = 90;
            Amit.age = 20;

            Player utsav;
            utsav.score = 93;
            utsav.age = 19; 

            Player *Sahil = new Player ; //heap memory allocation;
           // Player Sahilobj = *Sahil;

            // Sahilobj.score = 50;
            // Sahilobj.age = 19; 
            
            Sahil->score = 50;
            Sahil->age = 19; 

            cout<<"Amit: \n Score :-"<<Amit.score<<endl;
            cout<<" Age: "<<Amit.age<<endl;
            cout<<"Utsav: \n Score :-"<<utsav.score<<endl;
            cout<<" Age: "<<utsav.age<<endl;
            cout<<"Sahil: \n Score:-"<<Sahil->score<<endl;
            cout<<" Age: "<<Sahil->age<<endl;
        }