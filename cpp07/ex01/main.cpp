#include "iter.hpp"


int main()
{
    char array[6] = {'1','2', '3', '4', '5'};
    iter(array, 6, function);
    std::cout << std::endl;

    int array1[3] = {0, 3, 4};
    iter(array1, 3, function);
    std::cout << std::endl;


    return 0;
}