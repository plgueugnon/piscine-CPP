#include "ClapTrap.hpp"

/* Canonical */

ClapTrap::ClapTrap( void ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {

	std::cout << "Is it a mirror or did ClapTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;
	
	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap " << _name << " finally died thank god !"<< "(Destructor called)" << std::endl;

	return ;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	std::cout << "(Assignement operator called)" << std::endl;
	if ( this == &rhs )
		return ( *this );
	this->_name = rhs._name;
	this->_AttackDamage = rhs._AttackDamage; // a tester
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_HitPoints = rhs._HitPoints;

	return ( *this );
}

/*****************************************************************************/

std::string	ClapTrap::getName( void ) const {

	return (_name);
}

/*****************************************************************************/

ClapTrap::ClapTrap( std::string str ) : _HitPoints(HEALTH), _EnergyPoints(NRJ), _AttackDamage(DMG) {

	std::cout << "Ho no ! A ClapTrap " << str << " appeared ! ( Constructor called)" << std::endl;
	this->_name = str;

	return ;
}

void	ClapTrap::attack( std::string const &target ) {

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage !" << std::endl;

	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "Ouch ! ClapTrap " << _name << " takes " << amount << " points of damage !" << std::endl;
	if (amount >= _HitPoints)
		this->beRepaired(HEALTH);
	else
		_HitPoints -= amount;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( amount > _EnergyPoints )
		std::cout << "ClapTrap " << _name << " does not have enough energy points to heal himself !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " uses " << amount << " energy points to heal himself !" << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= amount;
	}

	return ;
}