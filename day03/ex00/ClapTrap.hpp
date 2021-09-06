#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

#define HEALTH 10
#define NRJ 10
#define DMG 0

class ClapTrap {

public:

	/* Canonical */
	ClapTrap( void );
	ClapTrap( ClapTrap const &src );
	~ClapTrap( void );
	ClapTrap	&operator=( ClapTrap const &rhs );

	/* Non canonical */
	ClapTrap( std::string str );
	

	void	attack( std::string const &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string	getName( void ) const;

private:

	std::string	_name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;

};

#endif