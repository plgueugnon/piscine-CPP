/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:02:33 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:02:34 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Canonical */
RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "defaultRobotomyRequestForm", 72, 45 ) {

	std::cout << "Robotomy form created" << std::endl;
	setTarget("none");

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	std::cout << "Robotomy form destroyed" << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( Form const &src ) {

	*this = src;

	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( Form const &rhs ) {

	Form::operator=(rhs);

	return ( *this );
}

/* Non canonical */
RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45 ) {

	std::cout << "A form " << getName() << " has been created for target " << target << std::endl;
	setTarget(target);

	return ;
}

bool	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {

	try
	{
		if ( getSigningStatus() == false )
			throw Form::FormNotSignedException();
		else if ( executor.getGrade() > getExecGrade() )
			throw Bureaucrat::GradeTooLowException();
		else
		{
			std::cout << "*WrrrRRRRRRRrrriiii !!!!*" << std::endl;
			std::srand(std::time(NULL));
			if ( rand() % 100 < 50 )
				std::cout << getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << "failure to robotomize " << getTarget() << std::endl;
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