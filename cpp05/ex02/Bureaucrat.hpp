/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 04:09:17 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:54:24 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;  
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &cp);
        Bureaucrat &operator=(const Bureaucrat &cp);
        
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public: 
                virtual const char * what() const throw();
        };
        void signForm(AForm &form);
        void ExecuteForm(AForm const &form) const;
        ~Bureaucrat();
};

std:: ostream & operator<< (std::ostream & os, Bureaucrat & fix);

#endif