#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(
        /* Default parameters is used that it not declarated when
           the object is created */
        std::string name_val = "player1",
        int xp_val = 1,
        int health_val = 100)
    {
        cout << "Construtor called" << endl;
    }

    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }
};


int main(){
    /* It's not necessary create a object with all parametters */
    Player boss;

    Player wizard("Gandoo");

    Player *enemy = new Player {"Walker", 200};
    delete enemy;

    Player tief("Billy", 20, 150);

    return 0;
}
