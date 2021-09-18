#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria { // tester avec virtual

public:

	/* Canonical */
	Ice( void );
	~Ice( void );
	Ice( Ice const &src );
	Ice	&operator=( Ice const &rhs );

	/* Non canonical */
	Ice( std::string const &type );
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

};

#endif // __ICE_H__