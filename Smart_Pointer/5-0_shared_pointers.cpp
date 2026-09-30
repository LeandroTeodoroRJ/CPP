#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Player{
private:
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

    void set_name(std::string name_val){
        name = name_val;
    }

    std::string get_name(){
        return name;
    }
};

void change_name(shared_ptr<Player> plr, std::string name_val){
    plr->set_name(name_val);
    cout << plr.use_count() << endl; /* Numbers of ownership */
    /* plr pointer was destroyed, but it's a shared pointer */
}

int main(){
    shared_ptr<Player> hero {new Player{"HERO", 100, 20}};
    cout << hero->get_name() << endl;
    cout << hero.use_count() << endl; /* Number of ownnership */
    /* shared pointer not respond to unique ownership rule */
    change_name(hero, "Walker"); /* Passed a copy of pointer */
    cout << hero->get_name() << endl;  /* hero obj was modified */
    /* Automatically deleted */

    return 0;
}
