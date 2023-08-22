#include "PmergeMe.hpp"

bool checkArgs(int argc, char **argv)
{
    for(int i = 1; i < argc; i++)
    {
        int j = 0;
        while(argv[i][j])
        {
            if(!std::isdigit(argv[i][j]))
                return false;
            j++;
        }
        if(atoi(argv[i]) < 0 || atoi(argv[i]) > 2147483647)
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    PmergeMe pm;
    if(argc < 3)
    {
        std::cerr << "Error: The number of argument is Wrong !" << std::endl;
        return (1);
    }
    if(!checkArgs(argc, argv))
    {
        std::cerr << "Error: Bad argument !" << std::endl;
        return (1);
    }
    std::cout << "before: ";
    int i = 1;
    while(i < argc)
    {
        std::cout << argv[i] << " ";
        pm.addToVector(atoi(argv[i]));
        pm.addToDeque(atoi(argv[i]));
        i++;
    }
    std::cout << std::endl;
    pm.sortVector(pm.vect);
    pm.sortDeque(pm.deq);
    std::cout << "After: ";
    pm.printVector(pm.vect);
     std::cout << "Time to process a range of " << pm.vect.size()  << " elements with std::vector: " << std::fixed << pm.timeVector << " us" << std::endl;
    std::cout << "Time to process a range of " << pm.deq.size()  << " elements with std::deque: " << std::fixed << pm.timeDeque << " us" << std::endl;
}