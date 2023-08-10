#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy_creation_from", 72, 45), target("robotomy_target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), target(copy.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
    if(this != &copy)
        target = copy.target;
    return *this;   
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy_creation_from", 72, 45), target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    else if(getSignde())
        throw AForm::FromNotSigned();
    else
    {
        std::cout << "str chr khr" << std::endl;
        std::srand(time(NULL));
        int randomNbr = std::rand() % 2;
        if(randomNbr == 0)
            std::cout << this->target << "has been robotomized successfully" << std::endl ;
        else if(randomNbr == 1)
            std::cout << this->target << "has been robotomy failed" << std::endl ;
    }
}