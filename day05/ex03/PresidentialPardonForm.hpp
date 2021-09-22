#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {

public:

	/* Canonical */
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( Form const &src );
	PresidentialPardonForm	&operator=( Form const &rhs );

	/* Non canonical */
	PresidentialPardonForm( std::string target );
	bool	execute( Bureaucrat const &executor ) const;

};

#endif // __PRESIDENTIALPARDONFORM_H__