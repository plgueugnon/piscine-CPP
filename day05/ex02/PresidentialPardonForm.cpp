/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:58:13 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:58:14 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Canonical */
PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "defaultPresidentialPardonForm", 25, 5 ) {

	std::cout << "Presidential form created" << std::endl;
	setTarget("none");

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	std::cout << "Presidential form destroyed" << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( Form const &src ) {

	*this = src;

	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( Form const &rhs ) {

	Form::operator=(rhs);

	return ( *this );
}

/* Non canonical */
PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5 ) {

	std::cout << "A form " << getName() << " has been created for target " << target << std::endl;
	setTarget(target);

	return ;
}

bool	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {

	try
	{
		if ( getSigningStatus() == false )
			throw Form::FormNotSignedException();
		else if ( executor.getGrade() > getExecGrade() )
			throw Bureaucrat::GradeTooLowException();
		else
		{
			std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
			return ( true );
		}
	}
	catch( const Form::FormNotSignedException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch( const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( false );
}