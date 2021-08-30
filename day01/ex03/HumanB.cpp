#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	
	return ;
}

HumanB::~HumanB(void) {
	
	return ;
}

void	HumanB::attack(void) const {
	
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

	return ;
}

// std::string HumanA::getName(void) const {
	
// }

// Weapon HumanA::getWeapon(void) const {
	
// }

void	HumanB::setWeapon(Weapon &weapon) {
	
	this->_weapon = &weapon; // ref prend adresse de la value passee en param

	return ;
}