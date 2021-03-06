/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:03:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:03:41 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Canonical */
Dog::Dog( void ) {

	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";

	return ;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;

	return ;
}

Dog::Dog( Dog const &src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;

	return ;
}

Dog	&Dog::operator=( Dog const &rhs ) {

	std::cout << "Dog equal operator called" << std::endl;
	if ( this != &rhs )
		Animal::operator=( rhs );

	return ( *this );
}

/* Non canonical */
void	Dog::makeSound( void ) const {

	std::cout << "Wouaf ! Wouaf !" << std::endl;

	return ;
}