/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:58:34 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:58:35 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {

public:

	/* Canonical */
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( Form const &src );
	RobotomyRequestForm	&operator=( Form const &rhs );

	/* Non canonical */
	RobotomyRequestForm( std::string target );
	bool	execute( Bureaucrat const &executor ) const;

};

#endif // __ROBOTOMYREQUESTFORM_H__