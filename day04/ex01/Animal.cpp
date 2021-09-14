#include "Animal.hpp"

/* Canonical */
Animal::Animal( void ) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

	return ;
}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

Animal::Animal( Animal const &src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return ;
}

// NB pas deep copy ici
Animal	&Animal::operator=( Animal const &rhs ) {

	std::cout << "Animal equal operator called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;

	return ( *this );
}

/* Non canonical */
void	Animal::makeSound( void ) const {

	std::cout << "/* Animal sound */" << std::endl;

	return ;
}

std::string	Animal::getType( void ) const {

	return ( _type );
}
