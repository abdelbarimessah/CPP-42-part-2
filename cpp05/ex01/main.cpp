/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:18:18 by amessah           #+#    #+#             */
/*   Updated: 2023/07/28 02:55:38 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try 
    {
        Bureaucrat ismail("ismail", 1);
        Form mittous ("mittous", 1, 20);
        try
        {
            mittous.beSigned(ismail);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << mittous << std::endl;
        std::cout << ismail << std::endl;
    }	
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
}
