#include "iter.hpp"

int main()
{
    char array[] = {'c', 'b' , 'v'};
    iter(array, 3, function);

    int array1[3] = {1, 3, 4};
    iter(array1, 3, function);


    return 0;
}