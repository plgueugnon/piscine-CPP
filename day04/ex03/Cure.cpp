/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:33:01 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:33:58 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Canonical */
Cure::Cure( void ) {

	std::cout << "Default Cure constructor called" << std::endl;
	_type = "cure";

	return ;
}

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;

	return ;
}

Cure::Cure( Cure const &src ) {

	*this = src;

	return ;
}

/* ************************************************************************** */
/* While assigning a Materia to another, copying the type doesn’t make sense  */
/* ************************************************************************** */

Cure	&Cure::operator=( Cure const &rhs ) {

	(void)rhs;

	return ( *this );
}

/* Non canonical */
Cure::Cure( std::string const &type ) : AMateria(type) {

	std::cout << "Cure constructor called" << std::endl;
	return ;
}

AMateria	*Cure::clone( void ) const {

	return ( new Cure(_type) );
}

void	Cure::use( ICharacter &target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return ;
}