/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:55:06 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:55:07 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &cp)
{
    (void)cp;
}

Intern::~Intern(){
}

Intern & Intern::operator=(const Intern &cp)
{
	(void) cp;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string myForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm",
		"PresidentialPardonForm"};
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		if (myForm[i] == name)
			break;
	}

	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name << std::endl;
		return new ShrubberyCreationForm(target);
		break;
	case 1:
		std::cout << "Intern creates " << name << std::endl;
		return new RobotomyRequestForm(target);
		break;
	case 2:
		std::cout << "Intern creates " << name << std::endl;
		return new PresidentialPardonForm(target);
		break;
	
	default:
		std::cout << "Form dosn't exist" << std::endl;
		break;
	}
	return nullptr;
}

