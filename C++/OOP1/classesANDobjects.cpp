#include <iostream>
using namespace std;
    class Player{
        private:
            int health;
            int age;
            int score;
            int alive;
        public:
                //getter;
            int getHealth(){
                return health;
            }
            int getage(){
                return age;
            }
            int getscore(){
                return score;
            }
            int isAlive(){
                return alive;
            }
                //setter;
                void setHealth(int health){
                    this->health = health;
                }
                void setage(int age){
                    this->age = age;
                }
                void setscore(int score){
                    this->score = score;
                }
                void setisAlive(bool alive){
                    this->alive = alive;
                }      
    };

        Player MaxScore(Player a, Player b){
            if(a.getscore() > b.getscore()) {return a;}
            else {return b;}
        }

        int addScore(Player a, Player b){
            return (a.getscore() + b.getscore());
        }

        int main() {
            Player utsav;
            utsav.setage(19);
            utsav.setHealth(80);
            utsav.setisAlive(true);
            utsav.setscore(90);

            Player rapunzel;
            rapunzel.setage(19);
            rapunzel.setHealth(90);
            rapunzel.setisAlive(true);
            rapunzel.setscore(91);

                Player max = MaxScore(utsav,rapunzel);
                if(max.getscore()==utsav.getscore()) {cout<<"Utsav"<<"\n";}
                else {cout<<"Rapunzel"<<"\n";}
                cout<<"Total Score: "<<addScore(utsav , rapunzel);
        }