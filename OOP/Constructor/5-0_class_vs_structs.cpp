#include <iostream>
#include <string>

using namespace std;

class Player{
/* Class is private by default */
/* private: */
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name, int health, int xp){
        cout << "Constructor with tree parameters called" << endl;
    }

    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_xp(int xp_val){
        xp = xp_val;
    }

    int get_xp(){
        return xp;
    }
};


struct sPlayer{
    std::string name;
    int health;
    int xp;
};

/* Structs don't implement methods */
int get_xp(sPlayer *ply){
    return ply->xp;
}

void set_xp(sPlayer *ply, int xp_val){
    ply->xp = xp_val;
}

int main(){
    Player hero("Gilter", 100, 12);
//  cout << hero.xp << endl; /* ERROR - class is private by default */
    hero.set_xp(999);
    cout << "The Hero XP is: " << hero.get_xp() << endl;

    sPlayer enemy;
    enemy.name = "Jart";
    enemy.xp = 79;
    enemy.health = 1000;

    cout << enemy.xp << endl; /* Don't problem structs is public by default */

    set_xp(&enemy, 100);
    cout << "The XP value: " << get_xp(&enemy) << endl;

    return 0;
}
