#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include <string>
#include "ICharacter.hpp" // a priori peut fonctionner sans

class ICharacter;

class AMateria {

protected:

	std::string	_type;

public:

	/* Canonical */
	AMateria( void );
	virtual ~AMateria( void );
	AMateria( AMateria const &src );
	AMateria	&operator=( AMateria const &rhs );

	/* Non canonical */
	AMateria( std::string const &type );
	std::string const	&getType( void ) const; // get Materia type
	virtual AMateria	*clone( void ) const = 0;
	virtual void	use( ICharacter	&target );

};

#endif // __AMATERIA_H__