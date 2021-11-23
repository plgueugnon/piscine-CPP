/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:16:23 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:16:24 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Canonical */
Animal::Animal( void ) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

	return ;
}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

Animal::Animal( Animal const &src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal	&Animal::operator=( Animal const &rhs ) {

	std::cout << "Animal equal operator called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;

	return ( *this );
}

/* Non canonical */
void	Animal::makeSound( void ) const {

	std::cout << "/* Animal sound */" << std::endl;

	return ;
}

std::string	Animal::getType( void ) const {

	return ( _type );
}
