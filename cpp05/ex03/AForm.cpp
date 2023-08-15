/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 04:05:53 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:54:56 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name(""), gradeToSign(150), gradeToExec(150)
{
}

AForm::~AForm() 
{
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec): name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    signde = false;
    if(this->gradeToSign < 1 || this->gradeToExec < 1)
        throw AForm::GradeTooHighException();
    else if(this->gradeToSign > 150 || this->gradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cp): name(cp.name), signde(cp.signde), gradeToSign(cp.gradeToSign), gradeToExec(cp.gradeToExec)
{
} 

AForm &AForm::operator=(const AForm &cp)
{
    if(this != &cp)
        signde = cp.signde;
    return *this;
}


std::string AForm::getName() const 
{
    return name;
}

int AForm::getGradeToSign() const 
{
    return gradeToSign; 
}

int AForm::getGradeToExec() const
{
    return gradeToExec;
}

bool AForm::getSignde() const 
{
    return signde;
}

void AForm::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade()<= gradeToSign)
        signde = true;
    else
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}

const char *AForm::FromNotSigned::what() const throw()
{
    return (" AForm is not signed\n");
}

std:: ostream & operator<< (std::ostream & os, AForm & fix)
{
    os << fix.getName() << std::endl
    << "Form status               = " << (fix.getSignde()? "Signed" : "Not signed") << std::endl
	<< "Grade required to  sign   = " << fix.getGradeToSign() << std::endl
	<< "Grade required to  execut = " << fix.getGradeToExec()<< std::endl;
    return os;
}