
#include <iostream>

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
        std::cout << "Result: " << km_h << std::endl;
    }
    catch(int &ex){
        std::cerr << "Sorry, divide by zero error." << std::endl;
    }

    return 0;
}
