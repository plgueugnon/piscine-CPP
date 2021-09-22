#ifndef __INTERN_H__
#define __INTERN_H__

#include <utility>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

	/* Canonical */
	Intern( void );
	~Intern( void );
	Intern( Intern const &src );
	Intern	&operator=( Intern const &rhs );

	/* Non canonical */
	Form	*makeForm( std::string form, std::string target );
	Form	*(Intern::*make_tab[3])(std::string target);

	Form	*CreateShrubberyForm( std::string target );
	Form	*CreateRobotomyForm( std::string target );
	Form	*CreatePresidentialForm( std::string target );

};

#endif // __INTERN_H__