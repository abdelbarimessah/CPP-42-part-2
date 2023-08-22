/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:48 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 22:54:49 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <iomanip>
#include <ctime>


class PmergeMe
{
    public:
        std::vector<int> vect;
        std::deque<int> deq;
        PmergeMe();
        PmergeMe(const PmergeMe &cp);
        PmergeMe &operator=(const PmergeMe &cp);
        ~PmergeMe();
        void addToVector(int num);
        void addToDeque(int num);
        void printVector(std::vector<int> & my_vec);
};

void insertionSortD(std::deque<int> &arr, int start, int end);
void mergeD(std::deque<int> &arr, int start, int mid, int end);
void mergeInsertionSortD(std::deque<int> &arr, int start, int end);

void insertionSort(std::vector<int> &arr, int start, int end);
void merge(std::vector<int> &arr, int start, int mid, int end) ;
void mergeInsertionSort(std::vector<int> &arr, int start, int end);


#endif