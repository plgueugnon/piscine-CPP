#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {

public:

	/* Canonical */
	Dog( void );
	~Dog( void );
	Dog( Dog const &src );
	Dog	&operator=( Dog const &rhs );

	/* Non canonical */
	void	makeSound( void ) const; // NB pas necessaire d'indiquer virtual ici pour override Animal

};

#endif // __DOG_H__