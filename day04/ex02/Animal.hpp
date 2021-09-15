#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal {

protected:

	std::string	_type; // instancié que dans classe fille

public:

	/* canonical */
	Animal( void );
	virtual ~Animal( void );
	Animal( Animal const &src );
	virtual Animal	&operator=( Animal const &rhs );

	/* Non canonical */
	virtual void	makeSound( void ) const = 0;
	virtual std::string	getType( void ) const;

};

#endif // __ANIMAL_H__