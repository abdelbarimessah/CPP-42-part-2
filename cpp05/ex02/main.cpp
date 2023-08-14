#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   try {
		Bureaucrat	_Bureaucrat("f1", 137);
		AForm *F1 = new  ShrubberyCreationForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.ExecuteForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
   try {
		Bureaucrat	_Bureaucrat("f2", 45);
		AForm *F2 = new  RobotomyRequestForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		F2->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
   try {
		Bureaucrat	_Bureaucrat("f3", 5);
		AForm *F3 = new  PresidentialPardonForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		F3->beSigned(_Bureaucrat);
		_Bureaucrat.ExecuteForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}