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
};


int main(){
    unique_ptr<Player> hero {new Player{"HERO", 100, 20}};
    hero->set_name("Walker");
    /* Automatically deleted */

    return 0;
}
