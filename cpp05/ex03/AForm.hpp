/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:51:47 by amessah           #+#    #+#             */
/*   Updated: 2023/08/15 01:54:58 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
# include <stdexcept>

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool    signde;
        const int gradeToSign;
        const int gradeToExec;

    public:
        AForm();
        AForm(const std::string name, const int gradeToSign, const int gradeToExec);
        AForm(const AForm &cp);
        AForm &operator=(const AForm &cp);
        
        std::string getName() const ;
        int getGradeToSign() const ;
        int getGradeToExec() const;
        bool getSignde() const ;
        
        void beSigned(Bureaucrat &bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class FromNotSigned : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        virtual ~AForm();
};

std:: ostream & operator<< (std::ostream & os, AForm & fix);


#endif