#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>


template<typename T>
int  easyfind(T &arr, int to_find)
{
    typename T::iterator i;
    i = std::find(arr.begin(), arr.end(), to_find); 
    if (i == arr.end())
    {
        std::cout << "No ocuurence found !" << std::endl;
        return(-1);
    }
    return std::distance(arr.begin(), i);
}



#endif