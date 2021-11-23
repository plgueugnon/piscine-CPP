/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:55:52 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:55:52 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if ( grade > MIN )
			throw Bureaucrat::GradeTooLowException();
		else if ( grade < MAX )
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
		if ( _grade <= MAX )
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
		if ( _grade >= MAX )
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

void	Bureaucrat::executeForm( Form const &form ) const {

	try
	{
		if ( form.execute( *this ) )
			std::cout << _name << " executes " << form.getName() << std::endl;
		else
			throw	"incompetency";
	}
	catch( const char *e )
	{
		std::cerr << "Failure to execute " << form.getName() << " due to " << e << std::endl;
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