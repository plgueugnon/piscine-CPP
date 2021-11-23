/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:02:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:02:41 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Canonical */
ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "defaultShrubberyCreationForm", 145, 137 ) {

	std::cout << "Shrubbery form created" << std::endl;
	setTarget("none");

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	std::cout << "Shrubbery form destroyed" << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( Form const &src ) {

	*this = src;

	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( Form const &rhs ) {

	Form::operator=(rhs);

	return ( *this );
}

/* Non canonical */
ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137 ) {

	std::cout << "A form " << getName() << " has been created for target " << target << std::endl;
	setTarget(target);

	return ;
}

bool	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {

	try
	{
		if ( getSigningStatus() == false )
			throw Form::FormNotSignedException();
		else if ( executor.getGrade() > getExecGrade() )
			throw Bureaucrat::GradeTooLowException();
		else
		{
			std::string	filename = getTarget() + "_Shrubbery";
			std::ofstream	ofs(filename.c_str());
			ofs << "     /\\" << std::endl;
			ofs << "    /**\\" << std::endl;
			ofs << "   /****\\" << std::endl;
			ofs << "  /******\\" << std::endl;
			ofs << " /********\\" << std::endl;
			ofs << "/**********\\" << std::endl;
			ofs << "     |||      " << std::endl;
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