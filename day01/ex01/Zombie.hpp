#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:

	std::string	_name; // a priori pas possible const voir lors compil // poss par contre si init par constructeur

public:

	void	announce( void ) const;
	void	setName( const std::string name, int N );

	Zombie( std::string zombie_name );
	Zombie( void ); // necessaire de faire un constructeur par defaut ici
	~Zombie( void );

};

#endif