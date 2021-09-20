#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	robert("robert", 150);
	Bureaucrat	gerard("gerard", 2);

	std::cout << robert;
	std::cout << gerard;

	robert.lowerGrade();
	robert.incrementGrade();

	std::cout << robert;

	gerard.incrementGrade();
	std::cout << gerard;
	gerard.incrementGrade();
	std::cout << gerard;

	Bureaucrat	unknown("unknown", 200);
	std::cout << unknown.getGrade() << std::endl;

	return ( 0 );
}