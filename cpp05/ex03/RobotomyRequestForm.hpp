/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:09:24 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:55:47 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & copy);
        void execute (Bureaucrat const & executor) const ;
        ~RobotomyRequestForm();
};



#endif