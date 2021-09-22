#include "Intern.hpp"

/* Canonical */
Intern::Intern( void ) {

	std::cout << "Intern created" << std::endl;

	return ;
}

Intern::~Intern( void ) {

	std::cout << "Intern destroyed" << std::endl;

	return ;
}

Intern::Intern( Intern const &src ) {

	*this = src;

	return ;
}

Intern	&Intern::operator=( Intern const &rhs ) {

	(void)rhs;

	return ( *this );
}

/* Non canonical */
Form	*Intern::makeForm( std::string form, std::string target ) {

	make_tab[0] = &Intern::CreateShrubberyForm;
	make_tab[1] = &Intern::CreateRobotomyForm;
	make_tab[2] = &Intern::CreatePresidentialForm;

	std::string	type[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if ( type[i] == form )
		{
			Form *tmp = (*this.*make_tab[i])(target);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return ( tmp );
		}
	}
	std::cerr << form << " is not a valid form type so stop hitting the intern !" << std::endl;

	return ( 0 );
}

Form	*Intern::CreateShrubberyForm( std::string target ) {

	return ( new ShrubberyCreationForm(target) );
}

Form	*Intern::CreateRobotomyForm( std::string target ) {

	return ( new RobotomyRequestForm(target) );
}

Form	*Intern::CreatePresidentialForm( std::string target ) {

	return ( new PresidentialPardonForm(target) );
}