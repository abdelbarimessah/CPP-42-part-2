/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 04:04:51 by amessah           #+#    #+#             */
/*   Updated: 2023/07/28 02:54:56 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool    signde;
        const int gradeToSign;
        const int gradeToExec;

    public:
        Form();
        Form(const std::string name, const int gradeToSign, const int gradeToExec);
        Form(const Form &cp);
        Form &operator=(const Form &cp);
        
        std::string getName();
        int getGradeToSign();
        int getGradeToExec();
        bool getSignde();
        void beSigned(Bureaucrat &bur);
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        ~Form();
};

std:: ostream & operator<< (std::ostream & os, Form & fix);

#endif