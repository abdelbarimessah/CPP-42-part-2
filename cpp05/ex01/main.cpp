/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:18:18 by amessah           #+#    #+#             */
/*   Updated: 2023/08/14 20:41:31 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try 
    {
        Bureaucrat messah("messah", 1);
        Form abdelbari ("abdelbari", -2, 220);
        try
        {
            abdelbari.beSigned(messah);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << abdelbari << std::endl;
        std::cout << messah << std::endl;
    }	
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
}
