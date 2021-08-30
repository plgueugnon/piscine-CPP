#include "HumanA.hpp"

// pk je me fais chier = is je ne passe pas addresse de weapon (ptr ou ref)
// => je cree une copie de class weapon => je cree donc deux fois cette class => redondant
HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	
	return ;
}

HumanA::~HumanA(void) {
	
	return ;
}

void	HumanA::attack(void) const {
	
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

	return ;
}

// std::string HumanA::getName(void) const {
	
// }

// Weapon HumanA::getWeapon(void) const {
	
// }

void	HumanA::setWeapon(Weapon &weapon) {
	
	this->_weapon = weapon; // ref prend adresse de la value passee en param

	return ;
}
