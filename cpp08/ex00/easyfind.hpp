#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>


template<typename T>
int  easyfind(T &arr, int to_find)
{
    if (std::find(arr.begin(), arr.end(), to_find) != arr.end())
        return 1;
    return 0;
}



#endif