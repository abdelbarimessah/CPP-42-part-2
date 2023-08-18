/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:12:57 by amessah           #+#    #+#             */
/*   Updated: 2023/08/18 22:12:58 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>
template <typename t>

void iter(t arr[], int len, void (*f)(t arr))
{
	int i;

	i = -1;
	while(++i < len)
		f(arr[i]);
}

template <typename T>
void print(T  x)
{
    std::cout << x << std::endl;
}

template <typename t>
void function(t arr)
{
	std::cout << arr << std::endl;
}


#endif