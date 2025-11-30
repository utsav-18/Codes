#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    class Helmet {
        int hp;
        int level;
    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() const {
            return hp;
        }
        int getLevel() const {
            return level;
        }
    };

    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    // Getters
    int getHealth() const {
        return health;
    }
    int getAge() const {
        return age;
    }
    int getScore() const {
        return score;
    }
    bool isAlive() const {
        return alive;
    }
    Gun getGun() const {
        return gun;
    }
    int getHelmetHp() const {
        return helmet.getHp();
    }
    int getHelmetLevel() const {
        return helmet.getLevel();
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setIsAlive(bool alive) {
        this->alive = alive;
    }
    void setGun(const Gun &gun) {
        this->gun = gun;
    }
    void setHelmet(int level) {
        int health = 0;
        if (level == 1) {
            health = 25;
        } else if (level == 2) {
            health = 50;
        } else if (level == 3) {
            health = 100;
        } else {
            cout << "Error: Invalid level!" << endl;
            return;  // Exit the function without setting the helmet
        }

        helmet.setHp(health);
        helmet.setLevel(level);
    }
};

// Function to display player stats
void displayPlayerStats(const Player& player) {
    cout << "Player Stats:" << endl;
    cout << "Age: " << player.getAge() << endl;
    cout << "Health: " << player.getHealth() << endl;
    cout << "Score: " << player.getScore() << endl;
    cout << "Gun Ammo: " << player.getGun().ammo << endl;
    cout << "Gun Damage: " << player.getGun().damage << endl;
    cout << "Gun Scope: " << player.getGun().scope << endl;
    cout << "Helmet Level: " << player.getHelmetLevel() << endl;
    cout << "Helmet HP: " << player.getHelmetHp() << endl;
    cout << "Alive: " << (player.isAlive() ? "Yes" : "No") << endl;
    cout << endl;
}

int main() {
    Player utsav;
    Player rapunzel;

    Gun akm;
    akm.ammo = 1000;
    akm.damage = 59;
    akm.scope = 6;

    Gun awm;
    awm.ammo = 10;
    awm.damage = 100;
    awm.scope = 8;

    utsav.setAge(19);
    utsav.setHealth(80);
    utsav.setIsAlive(true);
    utsav.setScore(90);
    utsav.setGun(akm);
    utsav.setHelmet(2);

    rapunzel.setAge(19);
    rapunzel.setHealth(90);
    rapunzel.setIsAlive(true);
    rapunzel.setScore(91);
    rapunzel.setGun(awm);
    rapunzel.setHelmet(2);

    displayPlayerStats(utsav);
    displayPlayerStats(rapunzel);

    return 0;
}
