/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:17 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:50:24 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
   try {
		Bureaucrat	_Bureaucrat("f1", 137);
		AForm *F1 = new  ShrubberyCreationForm(_Bureaucrat.getName());
        F1->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
   try {
		Bureaucrat	_Bureaucrat("f2", 45);
		AForm *F2 = new  RobotomyRequestForm(_Bureaucrat.getName()); 
		F2->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
   try {
		Bureaucrat	_Bureaucrat("f3", 5);
		AForm *F3 = new  PresidentialPardonForm(_Bureaucrat.getName());
		F3->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
   try {
		Bureaucrat	_Bureaucrat("f4", 5);
        Intern some;
		AForm *F3 = some.makeForm("RobotomyRequestForm", "abdelabri");
		F3->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}



    return 0;
}