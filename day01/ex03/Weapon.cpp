#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) : _weapon(weapon) {
	
	return ;
}

Weapon::~Weapon( void ) {
	
	return ;
}

const std::string	Weapon::getType( void ) const {
	
	return ( this->_weapon );
}

void	Weapon::setType( std::string weapon_type ) {
	
	this->_weapon = weapon_type;

	return ;
}
