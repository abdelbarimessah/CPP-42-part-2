#include "Span.hpp"

int main()
{
    try
    {
        Span sp(10000);
        std::vector<int> arr;
        for(int i = 0; i < 10000;i++)
            arr.push_back(i);
        sp.addMaxNumber(arr.begin(), arr.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &ou) 
    {
        std::cout << ou.what() << std::endl; 
    }
    return 0;
}