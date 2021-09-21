#include "Bureaucrat.hpp"

/* Canonical */
Bureaucrat::Bureaucrat( void ) : _name("unknown"), _grade(150) {

	std::cout << "Default bureaucrat constructor called" << std::endl;

	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Bureaucrat destructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	*this = src;

	return ;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs ) {

	if ( this != &rhs )
		_grade = rhs._grade;

	return ( *this );
}

/* Non canonical */
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {

	std::cout << "A fierce bureaucrat named " << _name << " is born (constructor called)" << std::endl;
	try
	{
		if ( grade > 150 )
			throw Bureaucrat::GradeTooLowException();
		else if ( grade < 1 )
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;
	}
	catch( const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch( const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ;
}

std::string const	Bureaucrat::getName( void ) const {

	return ( _name );
}

int	Bureaucrat::getGrade( void ) const {

	return ( _grade );
}

void	Bureaucrat::incrementGrade( void ) {

	try
	{
		if ( _grade <= 1 )
			throw Bureaucrat::GradeTooHighException();
		else
			_grade--;
	}
	catch( const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	
	return ;
}

void	Bureaucrat::lowerGrade( void ) {

	try
	{
		if ( _grade >= 150 )
			throw Bureaucrat::GradeTooLowException();
		else
			_grade++;
	}
	catch(const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ;
}

void	Bureaucrat::signForm( Form &f ) {

	try
	{
		if ( f.getSignGrade() < getGrade() )
		{
			std::cout << getName() << " cannot sign " << f.getName() << " because ";
			throw Bureaucrat::GradeTooLowException();
		}
		else
			std::cout << getName() << " signs " << f.getName() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return ;
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw() {

	return ( "ERROR: bureaucrat - grade too high" );
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return ( "ERROR: bureaucrat - grade too low" );
}

std::ostream	&operator<<( std::ostream &os, Bureaucrat &bureaucrat ) {

	return ( os << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl );
}