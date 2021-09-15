#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:

	Brain *_brain;

public:

	/* Canonical */
	Cat( void );
	~Cat( void );
	Cat( Cat const &src );
	Cat	&operator=( Cat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const; // NB pas necessaire d'indiquer virtual ici pour override Animal
	Brain	*getBrain( void ) const;
	void	setBrain(  std::string s );

};

#endif // __CAT_H__