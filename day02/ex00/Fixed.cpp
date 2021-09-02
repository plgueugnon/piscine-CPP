#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed(0) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const &src ) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src; // equivaut a ecrire a = b donc => appel de la surchage = qui elle meme appelle getRawBits

	return ;
}

Fixed::~Fixed( void ) {
	
	std::cout << "Destructor called" << std::endl;

	return ;
}

// 1 + 1 = notation infixe (car + au milieu)
// + 1 1 = notation prefixe
// 1 1 + = notation postfixe

// operator => permet declarer quel signe est surcharge
// rhs = right hand sign
// prend en param l'instance courante (this) et une reference sur l'instance courante
// va modifier l'instance courante
// on va renvoyer l'instance courante car on peut ecrire a = b = c si void => pas possible chainer assignation


// pk rhs => right hand side => car operateur d'assignation => on prend la valeur la plus a droite
// et on met a jour la valeur juste a gauche 
// b = a revient a dire b.operator=(a)
// NB en cas de deep copy (avec new) => verifier que qu'il n'y a pas de self assignment sinon a = a => BOOM
Fixed & Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits(); // rhs = addresse de l'objet source de la copie, par sa fonction membre j'accede a la valeur que je souhaite copier dans
	// dans l'instance de class du meme type
	// avec this j'accede a la valeur de la class courante

	return ( *this ); // je renvoie une reference sur l'instance courante / ref to myself => retour de valeur lhs = a savoir objet d'appel
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return ( this->_fixed );
}

void	Fixed::setRawBits( int const raw ) {
	
	std::cout << "getRawBits member function called" << std::endl;
	this->_fixed = raw;

	return ;
}

int	Fixed::_fractionnal = 8; // init tjrs a 8 de la static