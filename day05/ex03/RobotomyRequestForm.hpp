#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {

public:

	/* Canonical */
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( Form const &src );
	RobotomyRequestForm	&operator=( Form const &rhs );

	/* Non canonical */
	RobotomyRequestForm( std::string target );
	bool	execute( Bureaucrat const &executor ) const;

};

#endif // __ROBOTOMYREQUESTFORM_H__