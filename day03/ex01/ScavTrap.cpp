#include "ScavTrap.hpp"

/* Canonical */
ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap default constructor called" << std::endl;

	return ;
}

ScavTrap::~ScavTrap( void ) {

	// ClapTrap::~ClapTrap(); // a tester
	// std::cout << "ScavTrap destructor called" << std::endl;
	std::cout << "ScavTrap " << this->getName() << " finally died thank god !"<< "(Destructor called)" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {
// autre ecriture = reutilise la fonction de ClapTrap
	std::cout << "(ScavTrap assignement operator called)" << std::endl;
	if (this != &rhs )
		ClapTrap::operator=(rhs);
		// return ( *this );
	// else
	// {
	// 	_AttackDamage = rhs.getAttackDamage();
	// 	_HitPoints = 100;
	// 	_EnergyPoints = rhs.getEnergyPoints();
	// 	_name = 
	// 	this->setAttackDamage(); 
	// 	this->setEnergyPoints();
	// 	this->setHitpoints(rhs.getHitpoints());
	// 	this->setName(rhs.getName());
	// }
	return ( *this );
}

ScavTrap::ScavTrap( ScavTrap const &src ) {

	std::cout << "Is it a mirror or did ScavTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;

	return ;
}

/*****************************************************************************/

void	ScavTrap::guardGate( void ) {

	// ScavTrap::getName() // autre ecriture possible
	std::cout << "ScavTrap " << ClapTrap::getName() << " has enterred gate keeper mode" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap( str ) {

	std::cout << "Ho no ! A ScavTrap " << ScavTrap::getName() << " appeared ! ( Constructor called)" << std::endl;
	_AttackDamage = 20;
	_HitPoints = 100;
	_EnergyPoints = 50;

	std::cout << "......................................" << std::endl;
	std::cout << getName() << " has " << getHitpoints() << " health points !" << std::endl;
	std::cout << getName() << " has " << getEnergyPoints() << " energy points !" << std::endl;
	std::cout << getName() << " has " << getAttackDamage() << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}