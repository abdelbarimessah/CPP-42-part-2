#include "MutantStack.hpp"
#include <list>

int main()
{

    std::cout << "mutantStack" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout <<"top : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout<< "size : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout<< "size : " << mstack.size() << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout <<"   iterator  " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout <<"   revers  " << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

}

// int main()
// {

//     std::cout << "list" << std::endl;
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout <<"top : " << mstack.back() << std::endl;
//     mstack.pop_back();
//     std::cout<< "size : " << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);
//     std::cout<< "size : " << mstack.size() << std::endl;
//     std::list<int>::reverse_iterator rit = mstack.rbegin();
//     std::list<int>::reverse_iterator rite = mstack.rend();
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     std::cout <<"   iterator  " << std::endl;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::cout <<"   revers  " << std::endl;
//     while (rit != rite)
//     {
//         std::cout << *rit << std::endl;
//         ++rit;
//     }

// }
