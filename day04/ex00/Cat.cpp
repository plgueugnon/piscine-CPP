#include "Cat.hpp"

/* Canonical */
Cat::Cat( void ) {

	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";

	return ;
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;

	return ;
}

Cat::Cat( Cat const &src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;

	return ;
}

Cat	&Cat::operator=( Cat const &rhs ) {

	std::cout << "Cat equal operator called" << std::endl;
	if ( this != &rhs )
		Animal::operator=( rhs );

	return ( *this );
}

/* Non canonical */
void	Cat::makeSound( void ) const {

	std::cout << "Meeeeooowww..." << std::endl;

	return ;
}
