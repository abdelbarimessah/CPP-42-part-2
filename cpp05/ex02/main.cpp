
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

    try{
        Bureaucrat mittous("mittous", 1);
        ShrubberyCreationForm   Shrubbery("AppelTarget");
        RobotomyRequestForm     Robotomy("RobotomyTarget");
        // PresidentialPardonForm  Pardon("PardonTarget");

        Shrubbery.beSigned(mittous);
        Shrubbery.execute(mittous);
        
        Robotomy.beSigned(mittous);
        Robotomy.execute(mittous);
        
        // Pardon.beSigned(mittous);
        // Pardon.execute(mittous);
        
        mittous.ExecuteForm(Shrubbery);        
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}  