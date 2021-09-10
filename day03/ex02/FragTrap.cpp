#include "FragTrap.hpp"

/* Canonical */
FragTrap::FragTrap( void ) {

	std::cout << "FragTrap default constructor called" << std::endl;

	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap " << _name << " finally died thank god !"<< "(Destructor called)" << std::endl;

	return ;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {

	std::cout << "(ScavTrap assignement operator called)" << std::endl;
	if (this != &rhs )
		ClapTrap::operator=(rhs);
	return ( *this );
}

FragTrap::FragTrap( FragTrap const &src ) {

	std::cout << "Is it a mirror or did FragTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;

	return ;
}

/*****************************************************************************/

/* Non canonical */
void	FragTrap::highFivesGuys( void ) {

	std::cout << "Hey ! Heyyyy...! HEY ! give me five !" << std::endl;

	return ;
}

FragTrap::FragTrap( std::string str ) : ClapTrap( str ) {

	std::cout << "Ho no ! A ScavTrap " << _name << " appeared ! ( Constructor called)" << std::endl;
	_AttackDamage = 30;
	_HitPoints = 100;
	_EnergyPoints = 100;

	std::cout << "......................................" << std::endl;
	std::cout << _name << " has " << _HitPoints << " health points !" << std::endl;
	std::cout << _name << " has " << _EnergyPoints << " energy points !" << std::endl;
	std::cout << _name << " has " << _AttackDamage << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}