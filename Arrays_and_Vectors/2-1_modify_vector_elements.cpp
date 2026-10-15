
#include <iostream>
#include <cstdio>
#include <vector>

int main(){
    /*
    SINTAX:
    vector <type> name;
    */
    /* Declare and initialize */
    std::vector <int> temperatures {35, 27, 32, 29};

    /* read elements */
    std::cout << temperatures[1] << std::endl;
    std::cout << temperatures.at(1) << std::endl;

    /* modify elements */
    temperatures.at(2) = 40;
    std::cout << temperatures.at(2) << std::endl;

    /* read out off memory space */
//  std::cout << temperatures.at(4) << std::endl; /* COMPILER ERROR - out of range */

    /* add a new elememt dinamically */
    temperatures.push_back(39);
    std::cout << temperatures.at(4) << std::endl;

    /* return the size */
    std::cout << "The vector size is: " << temperatures.size() << std::endl;

    return 0;
}
