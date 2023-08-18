#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#include <iostream>

template <typename whatever>
void swap (whatever &a, whatever &b)
{
    whatever c;
    c = a;
    a = b;
    b = c;
}

template <typename whatever>
whatever min(whatever a, whatever b)
{
    whatever result;
    result = (a < b) ? a : b;
    return result;    
}

template <typename whatever>
whatever max(whatever a, whatever b)
{
    whatever result;
    result = (a > b) ? a : b;
    return result;    
}



#endif