#include "Ice.hpp"

/* Canonical */
Ice::Ice( void ) {

	std::cout << "Default Ice constructor called" << std::endl;
	_type = "ice";

	return ;
}

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;

	return ;
}

Ice::Ice( Ice const &src ) {

	*this = src;

	return ;
}

Ice	&Ice::operator=( Ice const &rhs ) {

	(void)rhs;
// While assigning a Materia to another, copying the type doesn’t make sense ?
	return ( *this );
}

/* Non canonical */
Ice::Ice( std::string const & type ) : AMateria(type) { // a tester

	std::cout << "Ice constructor called" << std::endl;

	return ;
}

AMateria	*Ice::clone( void ) const {

	return ( new Ice(_type) ); // a verifier
}

void	Ice::use( ICharacter &target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;
}