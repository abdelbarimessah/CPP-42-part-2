#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>


class PmergeMe
{
    public:
        double timeVector;
        double timeDeque;
        std::vector<int> vect;
        std::deque<int> deq;
        PmergeMe();
        PmergeMe(const PmergeMe &cp);
        PmergeMe &operator=(const PmergeMe &cp);
        ~PmergeMe();
        void addToVector(int num);
        void addToDeque(int num);
        void sortVector(std::vector<int> & vect);
        void sortDeque(std::deque<int> & deq);
        void printVector(std::vector<int> & my_vec);
};

// void mergeSortVector(std::vector<int> & my_vec, int start, int end);
// void mergeSortDeque(std::deque<int> & my_deq, int start, int end);

template <typename Container>
void sortInsert(Container & my_container, int start, int midle , int end)
{
    int i = start;
    int j = midle + 1;
    int k = start;
    int tmp[end + 1];

    while(i <= midle && j <= end)
    {
        if(my_container[i] <= my_container[j])
        {
            tmp[k] = my_container[i];
            k++;
            i++;     
        }
        else
        {
            tmp[k] = my_container[j];
            k++;
            j++;
        }
    }
    while(i <= midle)
    {
        tmp[k] = my_container[i];
        k++;
        i++;
    }
    while(j <= end)
    {
        tmp[k] = my_container[j];
        k++;
        j++;
    }
    for(int a = start; a <= end; a++)
    {
        my_container[a] = tmp[a];
    }
}

#endif