#ifndef __FORM_H__
#define __FORM_H__

#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

#define MIN 150
#define MAX 1

class Bureaucrat; // forward declaration

class Form {

public:

	/* Canonical */
	Form( void );
	virtual ~Form( void );
	Form( Form const &src );
	Form	&operator=( Form const &rhs );

	/* Non canonical */
	Form( std::string name, int signlvl, int execlvl );
	std::string const	getName( void ) const;
	int	getSignGrade( void ) const;
	int	getExecGrade( void ) const;
	bool	getSigningStatus( void ) const;
	std::string	getTarget( void ) const;

	void	setSignGrade( int grade ); // nb pas de setname car const
	void	setExecGrade( int grade );
	void	setSigningStatus( bool status );
	void	setTarget( std::string target );

	void	beSigned( Bureaucrat &b );
	virtual bool	execute( Bureaucrat const & executor ) const = 0;

	class GradeTooHighException; // forward declaration
	class GradeTooLowException;
	class FormNotSignedException;

private:

	std::string const	_name;
	bool	_signed;
	int	_signGrade;
	int	_execGrade;
	std::string _target;

};

class Form::GradeTooHighException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

class Form::GradeTooLowException : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

class Form::FormNotSignedException : public std::exception {

	public:

	virtual const char	*what( void ) const throw();
};

std::ostream	&operator<<( std::ostream &os, Form &form );

#endif // __FORM_H__