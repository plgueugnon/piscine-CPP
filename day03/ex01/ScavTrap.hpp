#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	/* Canonical */
	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap	&operator=( ScavTrap const &rhs );
	ScavTrap( ScavTrap const &src );

	/* Non canonical */
	void	guardGate( void );
	ScavTrap( std::string str );

	// ScavTrap : ClapTrap( std::string str );
	// ~ScavTrap : ClapT a;
	// p();

private:
	/* data */


};


#endif