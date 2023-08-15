/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:01:36 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:55:49 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery_creation_from", 145, 137), target("shrubbery_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy), target(copy.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
    if(this != &copy)
        target = copy.target;
    return *this;   
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery_creation_from", 145, 137), target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    else if(getSignde())
        throw AForm::FromNotSigned();
    else
    {
        std::ofstream os;
        os.open((target + "_shrubbery").c_str());
        if(os.is_open())
        {
            os << "   oxoxoo    ooxoo" <<  std::endl;
            os << " ooxoxo oo  oxoxooo" <<  std::endl;
            os << "oooo xxoxoo ooo ooox" <<  std::endl;
            os << "oxo o oxoxo  xoxxoxo" <<  std::endl;
            os << " oxo xooxoooo o ooo" <<  std::endl;
            os << "   ooo\\oo\\  /o/o" <<  std::endl;
            os << "      \\  \\/ /" <<  std::endl;
            os << "       |   /" <<  std::endl;
            os << "       |  |" <<  std::endl;
            os << "       |  |" <<  std::endl;
            os << "       |  |" <<  std::endl;
            os << " ______/___\\____" <<  std::endl;
        }
        else
        {
            std::cout << "Error in opening the file !" << std::endl;
            return ;
        }
    }
}