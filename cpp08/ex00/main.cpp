#include "easyfind.hpp"
#include <vector>
#include <set>
#include <array>
#include <iostream>


int main ()
{
    std::array<int, 9> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = easyfind (arr, 10);
    int j = easyfind (arr, 1);
    int k = easyfind (arr, -1);
    std::cout << i << std::endl << j << std::endl << k << std::endl;
}