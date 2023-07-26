/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:18:18 by amessah           #+#    #+#             */
/*   Updated: 2023/07/26 00:54:04 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat mittous("abdelbari", 1);
		std::cout << mittous << std::endl;
		try
		{
			mittous.incrementGrade();
		}
		catch(std::exception& mit)
		{
			std::cerr << mit.what()<< " " << 0 <<std::endl;
		}
		std::cout << mittous << std::endl;
		Bureaucrat ismail("abdo", 151);
	}
	catch (std::exception& mit)
	{
		std::cerr << mit.what() << " " << 1 <<std::endl;
		try
		{
			Bureaucrat ismailMittous("abdelbaeimessah", -100);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << " " << 2 << '\n';
		}
	}
}