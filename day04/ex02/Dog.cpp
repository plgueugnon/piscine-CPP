#include "Dog.hpp"

/* Canonical */
Dog::Dog( void ) {

	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain(); // je cree brain

	return ;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;

	return ;
}

Dog::Dog( Dog const &src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;

	return ;
}

Dog	&Dog::operator=( Dog const &rhs ) {

	std::cout << "Dog equal operator called" << std::endl;
	if ( this != &rhs )
	{
		_type = rhs._type;
		*_brain = *rhs._brain; // necessaire de faire appel au operator= de brain pour une deep copy + si pas derefencé => pete a la figure
	}

	return ( *this );
}

/* Non canonical */
void	Dog::makeSound( void ) const {

	std::cout << "Wouaf ! Wouaf !" << std::endl;

	return ;
}

Brain	*Dog::getBrain( void ) const {

	return ( _brain );
}

void	Dog::setBrain( std::string s ) {

	_brain->_ideas[0] = s;

	return ;
}