/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:53:58 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:53:58 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	Bureaucrat	robert("robert", 150);
	Bureaucrat	gerard("gerard", 2);
	std::cout << robert;
	std::cout << gerard;

	Form	cerfa("cerfa", 3, 150);
	Form	cerfi("cerfi", 2, 151);
	std::cout << cerfa;
	std::cout << cerfi;

	cerfa.beSigned(robert);
	cerfa.beSigned(gerard);

	return ( 0 );
}