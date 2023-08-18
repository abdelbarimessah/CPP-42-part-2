/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:13:08 by amessah           #+#    #+#             */
/*   Updated: 2023/08/18 22:13:09 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    Array<int> arr2(5);

    for (int i = 0; i < (int)arr.size(); i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < (int)arr.size(); i++)
    {
        std::cout << "arr[" <<i<<"] = " << arr[i] << std::endl;
    }
    
    try
    {
        std::cout << arr[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << arr[-10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    arr2 = arr;
    for (int i = 0; i < (int)arr2.size(); i++)
    {
        std::cout << "arr2[" <<i<<"] = " << arr2[i] << std::endl;
    }
}