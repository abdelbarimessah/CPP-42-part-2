/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:55:09 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:55:10 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
    public :
        Intern();
        Intern(const Intern &cp);
        Intern & operator=(const Intern &cp);
        virtual ~Intern();
        AForm *makeForm(std::string name, std::string target);
    private :
};

#endif