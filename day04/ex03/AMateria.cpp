/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:28:06 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:28:18 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Canonical */
AMateria::AMateria( void ) : _type("default") {

	std::cout << "AMateria default constructor called" << std::endl;

	return ;
}

AMateria::~AMateria( void ) {

	std::cout << "AMateria destructor called" << std::endl;

	return ;
}

AMateria::AMateria( AMateria const &src ) {

	*this = src;

	return;
}

AMateria	&AMateria::operator=( AMateria const &rhs ) {

	if (this != &rhs)
		_type = rhs._type;

	return ( *this );
}

/* Non canonical */
AMateria::AMateria( std::string const &type ) : _type(type) {

	std::cout << "AMateria constructor called" << std::endl;

	return ;
}

std::string const	&AMateria::getType( void ) const {

	return (_type);
}

void	AMateria::use( ICharacter &target ) {

	std::cout << "* what ? " << target.getName() << " what ? *" << std::endl;

	return ;
}