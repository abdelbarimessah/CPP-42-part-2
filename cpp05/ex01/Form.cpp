/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 04:05:33 by amessah           #+#    #+#             */
/*   Updated: 2023/07/28 04:05:34 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(""), gradeToSign(150), gradeToExec(150)
{
}

Form::~Form() 
{
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec): name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    signde = false;
    if(this->gradeToSign < 1 || this->gradeToExec < 1)
        throw Form::GradeTooHighException();
    else if(this->gradeToSign > 150 || this->gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &cp): name(cp.name), signde(cp.signde), gradeToSign(cp.gradeToSign), gradeToExec(cp.gradeToExec)
{
} 

Form &Form::operator=(const Form &cp)
{
    if(this != &cp)
        signde = cp.signde;
    return *this;
}


std::string Form::getName()
{
    return name;
}

int Form::getGradeToSign()
{
    return gradeToSign; 
}

int Form::getGradeToExec()
{
    return gradeToExec;
}

bool Form::getSignde()
{
    return signde;
}

void Form::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade()<= gradeToSign)
        signde = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}

std:: ostream & operator<< (std::ostream & os, Form & fix)
{
    os << fix.getName() << std::endl
    << "Form status               = " << (fix.getSignde()? "Signed" : "Not signed") << std::endl
	<< "Grade required to  sign   = " << fix.getGradeToSign() << std::endl
	<< "Grade required to  execut = " << fix.getGradeToExec()<< std::endl;
    return os;
}