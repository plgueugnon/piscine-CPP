/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:22:10 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 11:24:32 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main( void ) {

	Mutantstack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "____getting last value____" << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << ".........................." << std::endl;
	std::cout << "____getting size value____" << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	Mutantstack<int>::iterator it = mstack.begin();
	Mutantstack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << ".........................." << std::endl;
	std::cout << "____listing all values____" << std::endl;
	while ( ++it != ite )
		std::cout << *it << std::endl;

	std::cout << ".........................." << std::endl;
	/* ************************************************************************** */
	/* for this example to work we have to pubicly inherit form std::stack to	  */
	/* allow this upcast														  */
	/* ************************************************************************** */
	std::stack<int>	s(mstack);

	return ( 0 );
}