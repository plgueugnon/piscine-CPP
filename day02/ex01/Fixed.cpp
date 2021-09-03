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
	//_fixed <<= 8; // si 10 => 10.00000000 => en int = 30000000 car int code en 4 octet car int dans 2e octet => 1 er octet vide
	_fixed = std::roundf((1 << _bits) * f); // si 10.5 => 10.5 en flottant => on extrait partie entiere on la place dans le 2e octet
	
	// std::cout << std::bitset<32>(_fixed) << std::endl; // affiche les bits completement
	
	return ;
}

Fixed::Fixed(const int i) {

	std::cout << "Int constructor called" << std::endl;
	_fixed = i << _bits;
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

	return ((float)_fixed / (float)(1 << _bits)); // on recupere le float en decalant les bits dans l'autres sens puis en castant en float
}

int	Fixed::toInt(void) const {

	return (_fixed >> _bits);
}

std::ostream& operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat(); // a modif
	return ( o );
}

int	Fixed::_bits = 8;