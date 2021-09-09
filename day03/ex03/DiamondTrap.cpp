#include "DiamondTrap.hpp"

/* Canonical */
DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap default constructor called" << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap " << this->getName() << " finally died thank god !"<< "(Destructor called)" << std::endl;
	return ;
}

// peut etre allege en utilisant != pour eviter doublon return + reutiliser code ClapTrap pour alleger class
DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	std::cout << "(DiamondTrap assignement operator called)" << std::endl;
	if (this == &rhs )
		return ( *this );
	else
	{
		this->setAttackDamage(rhs.getAttackDamage()); 
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setHitpoints(rhs.getHitpoints());
		this->setName(rhs.getName());
	}
	return ( *this );
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) {

	std::cout << "Is it a mirror or did DiamondTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;

	return ;
}

// : ClapTrap( str + "_clap_name" ) = concat
DiamondTrap::DiamondTrap( std::string str ) : ClapTrap( str + "_clap_name" ) {

	// ClapTrap::setName(ClapTrap::getName() + "_clap_name"); // a tester
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());

	std::cout << "......................................" << std::endl;
	std::cout << getName() << " has " << getHitpoints() << " health points !" << std::endl;
	std::cout << getName() << " has " << getEnergyPoints() << " energy points !" << std::endl;
	std::cout << getName() << " has " << getAttackDamage() << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "As ClapTrap my name is " << ClapTrap::getName();
	std::cout << " and as DiamondTrap my name is " << this->getName() << std::endl;

	return ;
}
