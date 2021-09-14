#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:

	Brain *_brain;

public:

	/* Canonical */
	Dog( void );
	~Dog( void );
	Dog( Dog const &src );
	Dog	&operator=( Dog const &rhs );

	/* Non canonical */
	void	makeSound( void ) const; // NB pas necessaire d'indiquer virtual ici pour override Animal
	Brain	*getBrain( void ) const;
	void	setBrain(  std::string s );

};

#endif // __DOG_H__