#pragma	once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA {

	public:

	HumanA( std::string name, Weapon &weapon ); // pr B => reste & car on fait en gros &b = a puis *ptr = &b
	~HumanA( void );

	/* METHOD */

	void	attack( void ) const;
	// std::string	getName( void ) const;
	// Weapon	getWeapon( void ) const;

	void	setWeapon( Weapon &weapon );

	private:

	std::string	_name;
	Weapon	&_weapon; // pr B => *ici

};

#endif // __HUMANA_H__