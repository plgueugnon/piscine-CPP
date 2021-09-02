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

	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	// poss ecrire "_fixed = rhs.getRawBits();"

	return ( *this );
}

// le tri entre les constructeurs est fait automatiquement si int ou float entre
Fixed::Fixed(const float f) {

	std::cout << "Float constructor called" << std::endl;
	_fixed = f;
	return ;
}

Fixed::Fixed(const int i) :_fixed(i) {

	std::cout << "Int constructor called" << std::endl;

	return ;
}

int	Fixed::getRawBits( void ) const {

	// std::cout << "getRawBits member function called" << std::endl;

	return ( this->_fixed );
}

void	Fixed::setRawBits( int const raw ) {
	
	this->_fixed = raw;

	return ;
}

float	Fixed::toFloat(void) const {

	return (_fixed);
}

int	Fixed::toInt(void) const {
	
	return (std::roundf(_fixed));
}

std::ostream& operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat(); // a modif
	return ( o );
}

int	Fixed::_bits = 8;