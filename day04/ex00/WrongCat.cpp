#include "WrongCat.hpp"

/* Canonical */
WrongCat::WrongCat( void ) {

	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";

	return ;
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat destructor called" << std::endl;

	return ;
}

WrongCat::WrongCat( WrongCat const &src ) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;

	return ;
}

WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {

	std::cout << "WrongCat equal operator called" << std::endl;
	if ( this != &rhs )
		WrongAnimal::operator=( rhs );

	return ( *this );
}

/* Non canonical */
void	WrongCat::makeSound( void ) const {

	std::cout << "Meeeeooowww..." << std::endl;

	return ;
}