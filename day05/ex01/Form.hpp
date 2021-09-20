#ifndef __FORM_H__
#define __FORM_H__

#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form {

public:

	/* Canonical */
	Form( void );
	~Form( void );
	Form( Form const &src );
	Form	&operator=( Form const &rhs );

	/* Non canonical */
	Form( std::string name, int signlvl, int execlvl );
	std::string const	getName( void ) const;
	void	beSigned( Bureaucrat const &b );

	class GradeTooHighException; // forward declaration
	class GradeTooLowException;

private:

	std::string const	_name;
	bool	_signed;
	int	_signGrade;
	int	_execGrade;

};

class Form::GradeTooHighException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

class Form::GradeTooLowException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

std::ostream	&operator<<( std::ostream &os, Form &form );

#endif // __FORM_H__