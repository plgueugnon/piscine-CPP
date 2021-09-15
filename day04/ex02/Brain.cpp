#include "Brain.hpp"

/* Canonical */
Brain::Brain( void ) {

	std::cout << "Brain created" << std::endl;

	return ;
}

Brain::~Brain( void ) {

	std::cout << "Brain destroyed" << std::endl;

	return ;
}

Brain::Brain( Brain const &src ) {

	*this = src;

	return ;
}

Brain	&Brain::operator=( Brain const &rhs ) {

	std::cout << "Brain equal operator called" << std::endl;
	if ( this != &rhs )
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i]; // deep copy

	return ( *this );
}