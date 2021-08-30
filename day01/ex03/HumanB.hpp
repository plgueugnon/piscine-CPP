#pragma	once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB {

	public:

	HumanB( std::string name ); // pr B => reste & car on fait en gros &b = a puis *ptr = &b
	~HumanB( void );

	/* METHOD */

	void	attack( void ) const;
	// std::string	getName( void ) const;
	// Weapon	getWeapon( void ) const;

	void	setWeapon( Weapon &weapon );

	private:

	std::string	_name;
	Weapon	*_weapon; // pr B => *ici

};

#endif // __HUMANB_H__