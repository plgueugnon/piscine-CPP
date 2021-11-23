/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:56:29 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:57:11 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Canonical */

/* ************************************************************************** */
/* Values have to be initialized in the same order as they are declared in	  */
/* the .hpp file															  */
/* ************************************************************************** */

Form::Form( void ) : _name("unknown"), _signGrade(MIN), _execGrade(MIN) {

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
	try
	{
		if ( signlvl > MIN || execlvl > MIN )
			throw Form::GradeTooLowException();
		else if ( signlvl < MAX || execlvl < MAX )
			throw Form::GradeTooHighException();
		else
		{
			_signGrade = signlvl;
			_execGrade = execlvl;
		}
	}
	catch( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch( const Form::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ;
}

std::string const	Form::getName( void ) const {

	return ( _name );
}

int	Form::getSignGrade( void ) const {

	return ( _signGrade );
}

int	Form::getExecGrade( void ) const {

	return ( _execGrade );
}

bool	Form::getSigningStatus( void ) const {

	return ( _signed );
}

std::string	Form::getTarget( void ) const {

	return ( _target );
}

void	Form::setSignGrade( int grade ) {

	_signGrade = grade;

	return ;
}

void	Form::setExecGrade( int grade ) {

	_execGrade = grade;

	return ;
}

void	Form::setSigningStatus( bool status ) {

	_signed = status;

	return;
}

void	Form::setTarget( std::string target ) {

	_target = target;

	return ;
}

void	Form::beSigned( Bureaucrat &b ) {

	try
	{
		if ( b.getGrade() > getSignGrade() )
			throw Form::GradeTooLowException();
		else
		{
			_signed = true;
			b.signForm( *this );
		}
	}
	catch( const Form::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
		b.signForm( *this );
	}	

	return ;
}

const char	*Form::GradeTooHighException::what( void ) const throw() {

	return ( "ERROR: form - grade too high" );
}

const char	*Form::GradeTooLowException::what( void ) const throw() {

	return ( "ERROR: form - grade too low" );
}

const char	*Form::FormNotSignedException::what( void ) const throw() {

	return ( "ERROR: form - not signed" );
}

std::ostream	&operator<<( std::ostream &os, Form &b ) {

	std::cout << "Form ref: " << b.getName() << " sign level: " << b.getSignGrade() << " exec level: " << b.getExecGrade();
	if ( b.getSigningStatus() )
		std::cout << " status: signed" << std::endl;
	else
		std::cout << " status: unsigned" << std::endl;
	return ( os );
}