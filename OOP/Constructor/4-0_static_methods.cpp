#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    static int num_players; /* Static member declaration */
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name, int health, int xp){
        cout << "Constructor with tree parameters called" << endl;
        Player::increment_player();
    }

    ~Player(){
        cout << "Destructor called" << endl;
    }

    static void start_players(){ /* Static method declaration */
        num_players = 0;
    }

    static void increment_player(){
        num_players++;
    }

    static int get_players(){
        return num_players;
    }
};

/* Ststic members and methods not belong a specific object. */
/* You must inicialize static members outside of main function. */
int Player::num_players {0};

int main(){
    Player::start_players();

    Player hero("Gilter", 100, 12);
    cout << "Number of players: " << hero.get_players() << endl;

    Player wizard("Derafin", 100, 12);
    cout << "Number of players: " << hero.get_players() << endl;     /* Run on the class */
    cout << "Number of players: " << Player::get_players() << endl;  /* Run on the class */

    return 0;
}
