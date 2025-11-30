#include <iostream>
    using namespace std;
    class player{
        public:
        int score;
        int health;
            void showHealth(){
                cout<<"Health is: "<<health<<endl;
            }
            void showscore(){
                cout<<"Score is: "<<score;
            }
    };
        int main() {
            player amit;
            amit.score = 90;
            amit.health = 100;
            amit.showHealth();
            amit.showscore();

        }