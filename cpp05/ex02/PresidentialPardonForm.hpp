#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm & cp);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & cp);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};

#endif