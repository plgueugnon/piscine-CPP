/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:18:29 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:18:29 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Canonical */
Cat::Cat( void ) {

	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();

	return ;
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
	delete _brain;

	return ;
}

Cat::Cat( Cat const &src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;

	return ;
}

Cat	&Cat::operator=( Cat const &rhs ) {

	std::cout << "Cat equal operator called" << std::endl;
	if ( this != &rhs )
	{
		_type = rhs._type;
		*_brain = *rhs._brain;
	}

	return ( *this );
}

/* Non canonical */
void	Cat::makeSound( void ) const {

	std::cout << "Meeeeooowww..." << std::endl;

	return ;
}

Brain	*Cat::getBrain( void ) const {

	return ( _brain );
}

void	Cat::setBrain( std::string s ) {

	_brain->_ideas[0] = s;

	return ;
}