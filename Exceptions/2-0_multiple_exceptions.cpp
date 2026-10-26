
#include <iostream>
#include <string>

int km {};
int h {};
float km_h {};

int main(){
    std::cout << "Enter the km: ";
    std::cin >> km  ;
    std::cout << "Enter the hours: ";
    std::cin >> h;

    try {
        if(h == 0) throw 0; /* escape line */
        km_h = float(km)/h;
        if(km_h < 0) throw std::string {"Nagative value error"};
        std::cout << "Result: " << km_h << std::endl;
    }
    catch(int &ex){
        std::cerr << "Sorry, divide by zero error." << std::endl;
    }
    catch(std::string &ex){
        std::cerr << ex << std::endl;
    }

    return 0;
}
