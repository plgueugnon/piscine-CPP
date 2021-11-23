/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:34:09 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:34:43 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Canonical */
Ice::Ice( void ) {

	std::cout << "Default Ice constructor called" << std::endl;
	_type = "ice";

	return ;
}

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;

	return ;
}

Ice::Ice( Ice const &src ) {

	*this = src;

	return ;
}

/* ************************************************************************** */
/* While assigning a Materia to another, copying the type doesn’t make sense  */
/* ************************************************************************** */

Ice	&Ice::operator=( Ice const &rhs ) {

	(void)rhs;

	return ( *this );
}

/* Non canonical */
Ice::Ice( std::string const & type ) : AMateria(type) {

	std::cout << "Ice constructor called" << std::endl;

	return ;
}

AMateria	*Ice::clone( void ) const {

	return ( new Ice(_type) );
}

void	Ice::use( ICharacter &target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;
}