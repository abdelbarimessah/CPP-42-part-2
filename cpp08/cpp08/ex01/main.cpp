#include "Span.hpp"

int main()
{
    try
    {
        Span sp(7);
        std::vector<int> arr(2, 100);
        sp.addNumberMax(arr.begin(), arr.end());
        sp.addNumber(12);
        sp.addNumber(69);
        sp.addNumber(42);
        sp.addNumber(21);
        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &ou) 
    {
        std::cout << ou.what() << std::endl; 
    }
    return 0;
}