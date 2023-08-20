#include "easyfind.hpp"
#include <vector>
#include <set>
#include <array>
#include <iostream>
int main ()
{
    std::array<int, 9> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = easyfind (arr, 10);
    i > 0 && std::cout << "The number you want to find is: exist " << std::endl;
    i == 0 && std::cout << "The number you want to find is: not exist " << std::endl;
}