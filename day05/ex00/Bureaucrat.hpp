#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {

public:

	/* Canonical */
	Bureaucrat( void );
	~Bureaucrat( void );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat	&operator=( Bureaucrat const &rhs );

	/* Non canonical */
	Bureaucrat( std::string name, int grade );
	std::string	getName( void ) const;
	int	getGrade( void ) const;
	void	incrementGrade( void );
	void	lowerGrade( void );

	class GradeTooHighException; // forward declaration
	class GradeTooLowException;

protected:

	std::string const	_name;
	int	_grade;

};

class Bureaucrat::GradeTooHighException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

class Bureaucrat::GradeTooLowException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

std::ostream	&operator<<( std::ostream &os, Bureaucrat &bureaucrat );

#endif // __BUREAUCRAT_H__