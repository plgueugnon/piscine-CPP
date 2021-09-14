#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	/* Canonical */
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const &src );
	WrongCat	&operator=( WrongCat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;

};

#endif // __WRONGCAT_H__