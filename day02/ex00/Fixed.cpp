/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:34:32 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 10:48:35 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/* what is fixed point number representation :								  */
/* https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html			  */
/* ************************************************************************** */

Fixed::Fixed( void ) : _fixed(0) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const &src ) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed( void ) {
	
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed & Fixed::operator=( Fixed const &rhs ) {

	if ( this != &rhs )
	{
		std::cout << "Assignation operator called" << std::endl;
		this->_fixed = rhs.getRawBits();
	}
	return ( *this );
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return ( this->_fixed );
}

void	Fixed::setRawBits( int const raw ) {
	
	this->_fixed = raw;

	return ;
}

int	Fixed::_fractionnal = 8;