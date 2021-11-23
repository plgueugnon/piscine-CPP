/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:51:42 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:51:50 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

/* forward declaration */
class Bureaucrat;

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

	void	beSigned( Bureaucrat &b );

	/* forward declaration */
	class GradeTooHighException;
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