/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:50:57 by amessah           #+#    #+#             */
/*   Updated: 2023/08/02 00:09:01 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
 
#include "AForm.hpp"
#include <iostream>
#include <fstream>
 
class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & copy);
        ShrubberyCreationForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};

#endif