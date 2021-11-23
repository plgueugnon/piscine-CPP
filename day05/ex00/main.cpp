/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:48:20 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:09:08 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	robert("robert", 150);
	Bureaucrat	gerard("gerard", 2);

	std::cout << robert;
	std::cout << gerard;

	robert.lowerGrade();
	robert.incrementGrade();

	std::cout << robert;

	gerard.incrementGrade();
	std::cout << gerard;
	gerard.incrementGrade();
	std::cout << gerard;

	Bureaucrat	unknown("unknown", 200);
	std::cout << unknown.getGrade() << std::endl;

	return ( 0 );
}