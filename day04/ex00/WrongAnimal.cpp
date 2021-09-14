#include "WrongAnimal.hpp"

/* Canonical */
WrongAnimal::WrongAnimal( void ) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

	return ;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return ;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	std::cout << "Animal equal operator called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;

	return ( *this );
}

/* Non canonical */
void	WrongAnimal::makeSound( void ) const {

	std::cout << "/* Wrong Animal sound */" << std::endl;

	return ;
}

std::string	WrongAnimal::getType(void) const {

	return ( _type );
}