#include "Form.hpp"

/* Canonical */
Form::Form( void ) : _name("unknown"), _execGrade(150), _signGrade(150) {

	std::cout << "Default form constructor called" << std::endl;

	return ;
}
Form::~Form( void ) {

	std::cout << "Form destructor called" << std::endl;

	return ;
}

Form::Form( Form const &src ) {

	*this = src;

	return ;
}

Form	&Form::operator=( Form const &rhs ) {

	if ( this != &rhs )
	{
		_signGrade = rhs._signGrade;
		_execGrade = rhs._execGrade;
	}
	return ( *this );
}

/* Non canonical */
Form::Form( std::string name, int signlvl, int execlvl ) : _name(name) {

	std::cout << "A magnificent form " << _name << " has been created (constructor called)" << std::endl;

	return ;
}

std::string const	Form::getName( void ) const {

	return ( _name );
}

void	Form::beSigned( Bureaucrat const &b ) {

}

const char	*Form::GradeTooHighException::what( void ) const throw() {

	return ( "ERROR: grade too high" );
}

const char	*Form::GradeTooLowException::what( void ) const throw() {

	return ( "ERROR: grade too low" );
}

std::ostream	&operator<<( std::ostream &os, Form &b ) {

	std::cout << "" << std::endl;

	return ( os );
}