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
	if (this == &rhs) // protection against self assignment
		return ( *this );
	this->_fixed = rhs.getRawBits();

	return ( *this );
}

bool	Fixed::operator==( Fixed const &rhs ) const {

	std::cout << "Equality operator called" << std::endl;
	if ( this->toFloat() == rhs.toFloat() ) // revient à dire is lhs == rhs ?
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator!=( Fixed const &rhs ) const {

	std::cout << "Non equal operator called" << std::endl;
	if ( this->toFloat() != rhs.toFloat() ) // revient à dire is lhs != rhs ?
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator<( Fixed const &rhs ) const {

	std::cout << "lesser than operator called" << std::endl;
	if ( this->toFloat() < rhs.toFloat() ) // revient à dire is lhs < rhs ?
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator>( Fixed const &rhs ) const {

	std::cout << "greater than operator called" << std::endl;
	if ( this->toFloat() > rhs.toFloat() ) // revient à dire is lhs > rhs ?
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator<=( Fixed const &rhs ) const {

	std::cout << "lesser or equal operator called" << std::endl;
	if ( this->toFloat() <= rhs.toFloat() ) // revient à dire is lhs <= rhs ?
		return ( true );
	else
		return ( false );
}
bool	Fixed::operator>=( Fixed const &rhs ) const {

// a tester voir si pas preferable de le faire en int
	std::cout << "greater or equal operator called" << std::endl;
	if ( this->toFloat() != rhs.toFloat() ) // revient à dire is lhs >= rhs ?
		return ( true );
	else
		return ( false );
	// autre ecriture possible =
	// return ( this->toFloat() != rhs.toFloat() ); => bool implicite
}

Fixed	Fixed::operator+( Fixed const &rhs ) {

	return (this->toFloat() + rhs.toFloat() ); // lhs + rhs	
}

Fixed	Fixed::operator-( Fixed const &rhs ) {

	return (this->toFloat() - rhs.toFloat() ); // lhs - rhs	
}

Fixed	Fixed::operator*( Fixed const &rhs ) {

	return (this->toFloat() * rhs.toFloat() ); // lhs * rhs	
}

Fixed	Fixed::operator/( Fixed const &rhs ) {

	return (this->toFloat() / rhs.toFloat() ); // lhs / rhs	
}

// prefix -> ++a
/* NB a++ = affecter puis incrementer
++a = incrementer puis affecter revient a dire a += 1
i = 1; j = i++; => i = 2 et j = 1
i = 1; j = ++i; => i = 2 et j = 2 
Dans le cas du prefix on incremente l'objet puis on renvoie une reference vers l'objet
*/
Fixed&	Fixed::operator++( void ) {

	std::cout << "prefix ++ operator called" << std::endl;
	// _fixed += (1 << _bits) * 1; // = j'incremente de 1.0f
	// *this = *this + Fixed(1.0f / (1 << _bits)); // increment de la  plus petite valeur possible sur 8 bits
	*this = *this + (float)1/256; // autre ecriture possible
	return ( *this );
}

// par defaut obligatoire d'ecrire int en param, meme si pas utilise
// le int sert a distinguer postfix de prefix
// postfix -> a++
// ici on cree une copie de l'objet, on incremente la valeur de l'objet lui meme puis
// on renvoie une copie de l'objet
Fixed	Fixed::operator++( int ) {

	Fixed	tmp( *this );
	++*this; // appelle l'operateur d'increment prefix
	return ( tmp );
}

// prefix -> --a
Fixed&	Fixed::operator--( void ) {

	_fixed -= (1 << _bits) * 1; // = je decremente de 1.0f
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