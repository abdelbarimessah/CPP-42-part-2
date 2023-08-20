#include "Span.hpp"
#include <iostream>

#include <vector>


// int main()
// {
//     std::vector<int> g1;
//     for(int i = 0; i <= 5; i++)
//         g1.push_back(i);
    
//     std::cout << "Output of begin and end: " << std::endl;
//         for (std::vector<int>::iterator i = g1.begin(); i != g1.end(); ++i)
//             std::cout << *i << " ";

//     std::cout << std::endl<<  g1.capacity()<<  std::endl;
//     g1.resize(2);
//     if(!g1.empty())
//         std::cout << std::endl<<  g1.capacity()<<  std::endl;


//     try
//     {
//         std::cout << g1.at(10) <<std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     int *pos = g1.data();

//     std::cout << "---------------------\n";
//     for(int i = 0; i <= 5 ; i++)
//         std::cout << *pos++ <<std::endl;

//     std::cout << typeid(pos).name() << std::endl;

//     g1.assign(10,10);

//     g1.push_back(9);
    
//     for (std::vector<int>::iterator i = g1.begin(); i != g1.end(); ++i)
//         std::cout << *i << " ";
//     g1.pop_back();
//     std::cout << std::endl;
//     for (std::vector<int>::iterator i = g1.begin(); i != g1.end(); ++i)
//         std::cout << *i << " ";

//     g1.insert(g1.begin(),00);
//     g1.insert(g1.end(),00);
//     g1.clear();
//     std::cout << "\n++++++++"<<std::endl;
//     for (std::vector<int>::iterator i = g1.begin(); i != g1.end(); ++i)
//         std::cout << *i << " ";


// }


// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }



int main()
{
    try
    {
        Span sp(7);
        std::vector<int> arr(2, 10000);
        sp.addMaxNumber(arr.begin(), arr.end());
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