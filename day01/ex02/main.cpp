/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:50:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:51:03 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::string	stringOGN = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringOGN;
	std::string	&stringREF = stringOGN;

	std::cout << "address of string OGN = " << &stringOGN << std::endl;
	std::cout << "address of string PTR = " << stringPTR << std::endl;
	std::cout << "address of string REF = " << &stringREF << std::endl;

	std::cout << "printing with stringPTR = " << *stringPTR << std::endl;
	std::cout << "printing with stringREF = " << stringREF << std::endl;

	return ( 0 );
}