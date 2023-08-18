/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:13:00 by amessah           #+#    #+#             */
/*   Updated: 2023/08/18 22:13:01 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    char array[6] = {'1','2', '3', '4', '5'};
    iter(array, 6, function);
    std::cout << std::endl;

    int array1[3] = {0, 3, 4};
    iter(array1, 3, function);
    std::cout << std::endl;

    return 0;
}