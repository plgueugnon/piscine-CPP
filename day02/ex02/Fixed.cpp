/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:25:11 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 12:30:38 by pgueugno         ###   ########.fr       */
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

Fixed &Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return ( *this );
	this->_fixed = rhs.getRawBits();

	return ( *this );
}

bool	Fixed::operator==( Fixed const &rhs ) const {

	std::cout << "Equality operator called" << std::endl;
	if ( this->toFloat() == rhs.toFloat() )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator!=( Fixed const &rhs ) const {

	std::cout << "Non equal operator called" << std::endl;
	if ( this->toFloat() != rhs.toFloat() )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator<( Fixed const &rhs ) const {

	std::cout << "lesser than operator called" << std::endl;
	if ( this->toFloat() < rhs.toFloat() )
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator>( Fixed const &rhs ) const {

	std::cout << "greater than operator called" << std::endl;
	if ( this->toFloat() > rhs.toFloat() )
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator<=( Fixed const &rhs ) const {

	std::cout << "lesser or equal operator called" << std::endl;
	if ( this->toFloat() <= rhs.toFloat() )
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator>=( Fixed const &rhs ) const {

	std::cout << "greater or equal operator called" << std::endl;
	if ( this->toFloat() != rhs.toFloat() )
		return ( true );
	else
		return ( false );
}

Fixed	Fixed::operator+( Fixed const &rhs ) {

	return (this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const &rhs ) {

	return (this->toFloat() - rhs.toFloat() );	
}

Fixed	Fixed::operator*( Fixed const &rhs ) {

	return (this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const &rhs ) {

	return (this->toFloat() / rhs.toFloat() );
}

/* ************************************************************************** */
/* Small reminder of how prefix and suffix increment work:					  */
/* i = 1; j = i++; => i = 2 et j = 1										  */
/* i = 1; j = ++i; => i = 2 et j = 2										  */
/* ************************************************************************** */

/* prefix (++a) : here we increment by the smallest value possible on 8 bits */
Fixed&	Fixed::operator++( void ) {

	std::cout << "prefix ++ operator called" << std::endl;
	*this = *this + (float)1/256;
	return ( *this );
}

/* postfix (a++) */
Fixed	Fixed::operator++( int ) {

	Fixed	tmp( *this );
	++*this;
	return ( tmp );
}

/* prefix (--a) : here we decrement by 1.0f */
Fixed&	Fixed::operator--( void ) {

	_fixed -= (1 << _bits) * 1;
	return ( *this );
}

Fixed	Fixed::operator--( int ) {

	Fixed	tmp( *this );
	--*this;
	return ( tmp );
}

Fixed::Fixed(const float f) {

	std::cout << "Float constructor called" << std::endl;
	_fixed = std::roundf((1 << _bits) * f);
	
	return ;
}

Fixed::Fixed(const int i) {

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

float	Fixed::toFloat(void) const {

	return ((float)_fixed / (float)(1 << _bits));
}

int	Fixed::toInt(void) const {

	return (_fixed >> _bits);
}

std::ostream& operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return ( o );
}

Fixed&	Fixed::max( Fixed &lhs, Fixed &rhs ) {

	return ( lhs > rhs ? lhs : rhs );
}

Fixed&	Fixed::min( Fixed &lhs, Fixed &rhs ) {

	return ( lhs < rhs ? lhs : rhs );
}

const Fixed&	Fixed::max( Fixed const &lhs, Fixed const &rhs ) {

	return ( lhs > rhs ? lhs : rhs );
}

const Fixed&	Fixed::min( Fixed const &lhs, Fixed const &rhs ) {

	return ( lhs < rhs ? lhs : rhs );
}

int	Fixed::_bits = 8;