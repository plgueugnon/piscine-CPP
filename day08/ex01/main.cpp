/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:07:08 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 11:07:09 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main( void ) {

	std::cout << ".....SUBJECT TEST....." << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << ".....SIZE LIMIT ERROR TEST....." << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch(const SizeLimitReached &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << ".....LARGE RANGE OF NUMBERS TEST....." << std::endl;
	Span lg = Span(11564);
	std::srand(std::time(NULL));
	for(unsigned int i = 0; i < lg.getSize(); i++)
		try
		{
			lg.addNumber(std::rand());
		}
		catch(const SizeLimitReached &e)
		{
			std::cerr << e.what() << std::endl;
		}

	std::cout << lg.shortestSpan() << std::endl;
	std::cout << lg.longestSpan() << std::endl;

	std::cout << ".....EMPTY SPAN ERROR TEST....." << std::endl;
	Span empty = Span(3);
	try
	{
		std::cout << empty.shortestSpan() << std::endl;
		std::cout << empty.longestSpan() << std::endl;
	}
	catch(const NothingToFind &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		empty.addNumber(5);
		empty.addNumber(10);
		empty.addNumber(1);
	}
	catch(const SizeLimitReached &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << empty.shortestSpan() << std::endl;
		std::cout << empty.longestSpan() << std::endl;
	}
	catch(const NothingToFind &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}