#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:

	std::string const	_name;

public:

	void	announce( void ) const;

	Zombie( std::string zombie_name );
	~Zombie( void );

};

#endif