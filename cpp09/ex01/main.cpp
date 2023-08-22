/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:30 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 22:54:31 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: invalid number of arguments !" << std::endl;
        return (1);
    }
    RPN rpn;
    rpn.solveExpression(argv[1]);
}