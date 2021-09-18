#include "Cure.hpp"

/* Canonical */
Cure::Cure( void ) {

	std::cout << "Default Cure constructor called" << std::endl;
	_type = "cure";

	return ;
}

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;

	return ;
}

Cure::Cure( Cure const &src ) {

	*this = src;

	return ;
}

Cure	&Cure::operator=( Cure const &rhs ) {

	(void)rhs;
	// if (this != &rhs)
	// 	_type = rhs._type;
	// While assigning a Materia to another, copying the type doesn’t make sense ?

	return ( *this );
}

/* Non canonical */
Cure::Cure( std::string const &type ) : AMateria(type) { // tester si marche

	std::cout << "Cure constructor called" << std::endl;
	// _type = type;
	return ;
}

AMateria	*Cure::clone( void ) const {

	return ( new Cure(_type) ); // a verifier
}

void	Cure::use( ICharacter &target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return ;
}