
#include <iostream>
#include <cstdio>
#include <vector>

int main(){
    /* declaring 2D vectors */
    std::vector <std::vector <int>> vec2d
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /* show element */
    std::cout << vec2d.at(1).at(2) << std::endl; /* vec2d.[line].[col] */

    /* return the size */
    std::cout << "First dimention size [line]: " << vec2d.size() << std::endl;
    std::cout << "Second dimention size [col]: " << vec2d.at(0).size() << std::endl;

    return 0;
}
