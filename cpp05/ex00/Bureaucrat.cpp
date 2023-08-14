/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:29:53 by amessah           #+#    #+#             */
/*   Updated: 2023/08/14 16:05:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}
Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade) {
    if(grade < 1)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}
Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{
    *this = cp;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp)
{
    if(this != &cp)
        grade = cp.grade;
    return *this;
}

std::string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

void Bureaucrat::incrementGrade ()
{
    if(grade > 1)
        grade--;
    else 
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade ()
{
    if(grade < 150)
        grade++;
    else 
        throw GradeTooLowException();
}


std:: ostream &operator<< (std::ostream & os, Bureaucrat & fix)
{
    os << fix.getName() << ", bureaucrat grade " << fix.getGrade();
    return os;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}
