/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:15:09 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:15:10 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <locale>

std::string	keyword[] = { "nan", "nanf", "-inf", "inf", "inff", "-inff", "Stop" };

bool	check_nan( std::string s ) {

	for(int i = 0; keyword[i] != "Stop" ; i++)
		if (keyword[i] == s )
			return (true);
	return ( false );
}

void	char_convert( std::string s, bool nan ) {

	std::cout << "char: ";
	if ( nan || atol(s.c_str()) < CHAR_MIN || atol(s.c_str()) > CHAR_MAX )
		std::cout << "impossible" << std::endl;
	else if ( !isprint(atol(s.c_str())) )
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(atoi(s.c_str())) << "'" << std::endl;
}

void	int_convert( std::string s, bool nan ) {

	std::cout << "int: ";
	if ( nan || atol(s.c_str()) < INT_MIN || atol(s.c_str()) > INT_MAX )
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(atoi(s.c_str())) << std::endl;
}

void	float_convert( std::string s ) {

	std::cout << "float: " << static_cast<float>(atof(s.c_str())) << "f" << std::endl;
}

void	double_convert( std::string s ) {

	std::cout << "double: " << static_cast<double>(atof(s.c_str())) << std::endl;
}

int	main(int argc, char **argv) {

	/* https://en.cppreference.com/w/cpp/io/ios_base/setf */
	std::cout.setf( std::ios::fixed, std::ios::floatfield );
	std::cout << std::showpoint;
	std::cout.precision(1);

	if ( argc == 2 && argv != NULL )
	{
		bool	nan = check_nan(argv[1]);
		char_convert(argv[1], nan);
		int_convert(argv[1], nan);
		float_convert(argv[1]);
		double_convert(argv[1]);
	}
	else
		std::cerr << "ERROR: invalid input\nValid input = ./program <arg>" << std::endl;

	return (0);
}