#ifndef FRAGTRAP_Hh
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	/* Canonical */
	FragTrap( void );
	~FragTrap( void );
	FragTrap	&operator=( FragTrap const &rhs );
	FragTrap( FragTrap const &src );

	/* Non canonical */
	void	highFivesGuys( void );

};

#endif