#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	/* Canonical */
	Cure( void );
	~Cure( void );
	Cure( Cure const &src );
	Cure	&operator=( Cure const &rhs );

	/* Non canonical */
	Cure( std::string const &type );
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

};

#endif // __CURE_H__