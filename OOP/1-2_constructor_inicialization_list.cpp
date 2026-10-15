#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val, int xp_val)
    : name{name_val}, xp{xp_val}, health{100}  /* health receive the default value */
    {
        cout << "Construtor with inicializarion list" << endl;
    }

    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }
};


int main(){
    Player wizard("Gandoo", 100);

    Player *enemy = new Player {"Walker", 200};
    delete enemy;

    cout << "Auto delete wizard and hero because them out of scope - Stack Memory " << endl;

    return 0;
}

