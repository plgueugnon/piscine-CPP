/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:19:24 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:19:25 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Canonical */
Dog::Dog( void ) {

	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();

	return ;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;

	return ;
}

Dog::Dog( Dog const &src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;

	return ;
}

/* ************************************************************************** */
/* Necessary to use Brain class operator= to make a deep copy and to		  */
/* dereference pointers (otherwise it will crash)							  */
/* ************************************************************************** */

Dog	&Dog::operator=( Dog const &rhs ) {

	std::cout << "Dog equal operator called" << std::endl;
	if ( this != &rhs )
	{
		_type = rhs._type;
		*_brain = *rhs._brain;
	}

	return ( *this );
}

/* Non canonical */
void	Dog::makeSound( void ) const {

	std::cout << "Wouaf ! Wouaf !" << std::endl;

	return ;
}

Brain	*Dog::getBrain( void ) const {

	return ( _brain );
}

void	Dog::setBrain( std::string s ) {

	_brain->_ideas[0] = s;

	return ;
}