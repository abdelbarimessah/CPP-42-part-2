#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 137);
		AForm *F1 = new  ShrubberyCreationForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.ExecuteForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_987", 45);
		AForm *F2 = new  RobotomyRequestForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.ExecuteForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_000", 5);
		AForm *F3 = new  PresidentialPardonForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.ExecuteForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	//--------------------------------
	std::cout << "Shouldn't Work !" << std::endl;
   try {
		Bureaucrat	_Bureaucrat("Office_4454", 151);
		AForm *F3 = new  ShrubberyCreationForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.ExecuteForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}