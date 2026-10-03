
#include <iostream>
#include <cstdio>

int main(){
    /* element_type array_name [number of elements]; */
    int scores[3];
    scores[0] = 87;
    scores[1] = 100;
    scores[2] = 96;
//   scores[3] = 79; /* out of space */

    std::cout << scores[2] << std::endl;

    /* declaring and initializing */
    int temperatures[4] {35, 26, 38, 29};
    int measures[2] {0}; /* initialize all positions with 0 */
    int velocity[] {89, 120, 86, 68}; /* auto calculate array space */

    return 0;
}
