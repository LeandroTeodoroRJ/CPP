
#include <iostream>
#include <cstdio>

int main(){
    /*
    SINTAX:
    element_type array_name [dimension1] [dimension2] ...;
    */
    /* declaring and initializing */
    int day_temperatures[30][4];
    day_temperatures[3][2] = 25;
    std::cout << day_temperatures[3][2] << std::endl;

    /* initializing positions 2 dimentional - table */
    int student_score[3][4]
    {
        /* cols */
        {89, 90, 100, 78}, /* lines */
        {97, 79, 82, 84},
        {65, 78, 69, 70}
    };

    return 0;
}
