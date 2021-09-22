#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {

	Bureaucrat	robert("robert", 150);
	Bureaucrat	gerard("gerard", 2);
	std::cout << robert;
	std::cout << gerard;

	std::cout << "\n......................................" << std::endl;

	ShrubberyCreationForm	shrub("home");
	std::cout << shrub;

	shrub.beSigned(gerard);
	shrub.execute(robert);
	shrub.execute(gerard);

	std::cout << "\n......................................" << std::endl;

	RobotomyRequestForm	robot("robert");
	std::cout << robot;

	robot.beSigned(gerard);
	robot.execute(gerard);

	std::cout << "\n......................................" << std::endl;

	PresidentialPardonForm	ppf("gerard");
	std::cout << ppf;

	ppf.beSigned(gerard);
	robert.executeForm(ppf);
	gerard.executeForm(ppf);

	std::cout << "\n......................................" << std::endl;

	return ( 0 );
}