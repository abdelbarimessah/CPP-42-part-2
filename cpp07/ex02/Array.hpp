/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:13:05 by amessah           #+#    #+#             */
/*   Updated: 2023/08/18 22:13:06 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        size_t len;
    public:
        Array()
        {
            new Array[0];
            len = 0;
        }
        Array(unsigned int n)
        {
            array =  new T(n);
            len = n;
        }
        Array(const Array &cp)
        {
            this->len = cp.len;
            this->array = new T[this->len];
            for(size_t i = 0; i < cp.len; i++)
                this->array[i] = cp.array[i];    
        }

        Array<T> & operator=(const Array &cp)
        {
            if(this->array)
                delete[] array;
            this->len = cp.len;
            this->array = new T[this->len];
            for(size_t i = 0; i < cp.len; i++)
                this->array[i] = cp.array[i];    
            return (*this);
        }
        size_t size()
        {
            return(this->len);
        }
        T &operator[](unsigned int i)
        {
            if(i < this->len && i >= 0)
                return(this->array[i]);
            throw std::out_of_range("impossible to access elements out of defined range.");
        }
        ~Array()
        {
            delete[] array;
        }
};


#endif
