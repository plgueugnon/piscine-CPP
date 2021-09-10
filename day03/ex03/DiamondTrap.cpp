#include "DiamondTrap.hpp"

/* Canonical */
DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap default constructor called" << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap " << _name << " finally died thank god !"<< "(Destructor called)" << std::endl;
	return ;
}

// peut etre allege en utilisant != pour eviter doublon return + reutiliser code ClapTrap pour alleger class
DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	std::cout << "(DiamondTrap assignement operator called)" << std::endl;
	if (this != &rhs )
		ClapTrap::operator=(rhs);
	return ( *this );
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) {

	std::cout << "Is it a mirror or did DiamondTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;

	return ;
}

// : ClapTrap( str + "_clap_name" ) = concat
DiamondTrap::DiamondTrap( std::string str ) : ClapTrap( str + "_clap_name"), _name(str) {

	_HitPoints = 100; // oblige inscrire en dur sinon prendra les valeurs de ClapTrap
	_EnergyPoints = 50;
	_AttackDamage = 30;

	std::cout << "......................................" << std::endl;
	std::cout << _name << " has " << _HitPoints << " health points !" << std::endl;
	std::cout << _name << " has " << _EnergyPoints << " energy points !" << std::endl;
	std::cout << _name << " has " << _AttackDamage << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}

 // ici on fait appel a la variable _name de diamondTrap qui "shadow" la _name de la class ClapTrap
void	DiamondTrap::whoAmI( void ) {

	std::cout << "As ClapTrap my name is " << ClapTrap::getName();
	std::cout << " and as DiamondTrap my name is " << DiamondTrap::_name << std::endl;

	return ;
}
