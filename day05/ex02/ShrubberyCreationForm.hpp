/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:58:47 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:58:48 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form {

public:

	/* Canonical */
	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( Form const &src );
	ShrubberyCreationForm	&operator=( Form const &rhs );

	/* Non canonical */
	ShrubberyCreationForm( std::string target );
	bool	execute( Bureaucrat const &executor ) const;

};

#endif // __SHRUBBERYCREATIONFORM_H__