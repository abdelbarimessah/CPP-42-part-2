/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:45 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 23:04:19 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cp)
{
    this->deq = cp.deq;
    this->vect = cp.vect;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &cp)
{
    if(this != &cp)
    {
        this->deq = cp.deq;
        this->vect = cp.vect;
    }
    return *this;
}

void PmergeMe::addToVector(int num)
{
    this->vect.push_back(num);
}

void PmergeMe::addToDeque(int num)
{
    this->deq.push_back(num);
}

void insertionSortD(std::deque<int> &arr, int start, int end) 
{
    for (int i = start + 1; i <= end; ++i) 
    {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= start && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            --j;
        }
        
        arr[j + 1] = key;
    }
}

void mergeD(std::deque<int> &arr, int start, int mid, int end) 
{
    std::deque<int> left(arr.begin() + start, arr.begin() + mid + 1);
    std::deque<int> right(arr.begin() + mid + 1, arr.begin() + end + 1);

    size_t i = 0, j = 0, k = start;
    while (i < left.size() && j < right.size()) 
    {
        if (left[i] <= right[j]) 
        {
            arr[k] = left[i];
            ++i;
        } 
        else 
        {
            arr[k] = right[j];
            ++j;
        }
        ++k;
    }

    while (i < left.size()) 
    {
        arr[k] = left[i];
        ++i;
        ++k;
    }

    while (j < right.size()) 
    {
        arr[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeInsertionSortD(std::deque<int> &arr, int start, int end) 
{
    int interval = 10;
    if (end - start + 1 <= interval) 
    {
        insertionSortD(arr, start, end);
    }
    else 
    {
        int mid = start + (end - start) / 2;
        mergeInsertionSortD(arr, start, mid);
        mergeInsertionSortD(arr, mid + 1, end);
        mergeD(arr, start, mid, end);
    }
}

void insertionSort(std::vector<int> &arr, int start, int end) 
{
    for (int i = start + 1; i <= end; ++i) 
    {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= start && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            --j;
        }
        
        arr[j + 1] = key;
    }
}

void merge(std::vector<int> &arr, int start, int mid, int end) 
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    std::vector<int> left(n1);
    std::vector<int> right(n2);

    for (int i = 0; i < n1; ++i)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; ++j)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) 
    {
        if (left[i] <= right[j]) 
        {
            arr[k] = left[i];
            ++i;
        } 
        else 
        {
            arr[k] = right[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) 
    {
        arr[k] = left[i];
        ++i;
        ++k;
    }

    while (j < n2) 
    {
        arr[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeInsertionSort(std::vector<int> &arr, int start, int end) {
    int interval = 10;
    if (end - start + 1 <= interval)
        insertionSort(arr, start, end);
    else 
    {
        int mid = start + (end - start) / 2;
        mergeInsertionSort(arr, start, mid);
        mergeInsertionSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void PmergeMe::printVector(std::vector<int> & _v)
{
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
		std::cout << *it  << " ";
    std::cout << std::endl;
}
