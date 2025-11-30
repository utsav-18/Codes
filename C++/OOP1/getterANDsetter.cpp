#include <iostream> 
    using namespace std;

        class player {
            private:
            int score;  //data membres should be private;
            int health;

            public:
                //setter;
                void setscore(int s){
                    score =s;
                }
                void sethealth(int h){
                    health = h;
                }

                //getter;
                int getscore(){
                    return score;
                }
                int gethealth(){
                    return health;
                }
        };

        int main() {
            player harsh;
            harsh.sethealth(100);
            harsh.setscore(90);
            cout<<"Score: "<<harsh.getscore()<<endl;
            cout<<"Health: "<<harsh.gethealth();

        }