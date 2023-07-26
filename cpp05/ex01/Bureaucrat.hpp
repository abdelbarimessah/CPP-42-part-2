/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:08:40 by amessah           #+#    #+#             */
/*   Updated: 2023/07/26 04:21:26 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>
#include "Form.hpp"

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
        std::string getName();
        int getGrade();
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
        void signForm(Form &form);
        ~Bureaucrat();
};

std:: ostream & operator<< (std::ostream & os, Bureaucrat & fix);

#endif