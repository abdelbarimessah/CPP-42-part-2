/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:02:35 by amessah           #+#    #+#             */
/*   Updated: 2023/08/17 00:09:46 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc , char *argv[])
{
    if(argc != 2)
    {
        std::cout << "invalid number of argument !" << std::endl;
    }
    else
    {
        ScalarConverter::convert(argv[1]);
    }
}