#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	/* Canonical */
	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap	&operator=( ScavTrap const &rhs );
	ScavTrap( ScavTrap const &src );

	/* Non canonical */
	void	guardGate( void );
	ScavTrap( std::string str );

};


#endif