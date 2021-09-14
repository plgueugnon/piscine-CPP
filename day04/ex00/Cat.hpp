#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {

public:

	/* Canonical */
	Cat( void );
	~Cat( void );
	Cat( Cat const &src );
	Cat	&operator=( Cat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const; // NB pas necessaire d'indiquer virtual ici pour override Animal

};

#endif // __CAT_H__