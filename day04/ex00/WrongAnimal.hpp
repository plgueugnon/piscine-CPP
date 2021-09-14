#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>

class WrongAnimal {

protected:

	std::string	_type;

public:

	/* canonical */
	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( WrongAnimal const &src );
	WrongAnimal	&operator=( WrongAnimal const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;
	std::string	getType( void ) const;

};

#endif // __WRONGANIMAL_H__