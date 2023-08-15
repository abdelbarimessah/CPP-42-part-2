/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:54:34 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:54:34 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential_creation_from", 25, 5), target("shrubbery_target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy), target(copy.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
    if(this != &copy)
        target = copy.target;
    return *this;   
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential_creation_from", 25, 5), target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    else if(getSignde())
        throw AForm::FromNotSigned();
    else
    {
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}