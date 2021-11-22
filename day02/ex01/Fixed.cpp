/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:52:47 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 12:21:47 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed( const float f ) {

	std::cout << "Float constructor called" << std::endl;
	_fixed = std::roundf((1 << _bits) * f);
	
	return ;
}

Fixed::Fixed( const int i ) {

	std::cout << "Int constructor called" << std::endl;
	_fixed = i << _bits;
	return ;
}

int	Fixed::getRawBits( void ) const {

	return ( this->_fixed );
}

void	Fixed::setRawBits( int const raw ) {
	
	this->_fixed = raw;

	return ;
}

float	Fixed::toFloat( void ) const {

	return ((float)_fixed / (float)(1 << _bits));
}

int	Fixed::toInt( void ) const {

	return (_fixed >> _bits);
}

std::ostream& operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return ( o );
}

int	Fixed::_bits = 8;