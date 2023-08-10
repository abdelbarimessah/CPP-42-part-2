/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 04:10:57 by amessah           #+#    #+#             */
/*   Updated: 2023/08/01 23:57:42 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
    this->grade--;
    if(grade < 1)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}
void Bureaucrat::decrementGrade ()
{
    this->grade++;
    if(grade < 1)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
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

void Bureaucrat::signForm(AForm &form)
{
    if(form.getSignde() == true)
        std::cout << name << " signed " << form.getName() << std::endl;
    else 
        std::cout << name << " couldn’t sign " << form.getName() << " because his grade is too low" << std::endl;
}

void    Bureaucrat::ExecuteForm(AForm const &form) const
{
	if (form.getSignde() == false)
		std::cout << name << " couldn't execute " <<  form.getName() 
					<< " because the form is not signed" << std::endl;
	else if (form.getGradeToExec() < grade)
		std::cout << name << " couldn't execute " <<  form.getName() 
					<< " because his grade is too low" << std::endl;
	else
		std::cout << name << " executes " <<  form.getName() << std::endl;
}