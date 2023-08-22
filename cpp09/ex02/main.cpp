/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:42 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 22:54:43 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "After: ";
    clock_t begin = clock();
    mergeInsertionSort(pm.vect, 0, pm.vect.size() - 1);
    clock_t end = clock();
    pm.printVector(pm.vect);
    std::cout << "Time to process a range of " << pm.vect.size()  << " elements with std::vector: " << std::fixed <<  std::setprecision(5)<< (static_cast<double>(end - begin) / CLOCKS_PER_SEC) * 1000 << " us" << std::endl;
    begin = clock();
    mergeInsertionSortD(pm.deq, 0, pm.deq.size() - 1);
    end = clock();
    std::cout << "Time to process a range of " << pm.deq.size()  << " elements with std::deque: " << std::fixed <<  std::setprecision(5)<< (static_cast<double>(end - begin) / CLOCKS_PER_SEC) * 1000 << " us" << std::endl;
}