#include "FragTrap.hpp"

/* Canonical */
FragTrap::FragTrap( void ) {

	std::cout << "FragTrap default constructor called" << std::endl;

	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap " << this->getName() << " finally died thank god !"<< "(Destructor called)" << std::endl;

	return ;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {

	std::cout << "(ScavTrap assignement operator called)" << std::endl;
	if ( this == &rhs )
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

	std::cout << "Ho no ! A ScavTrap " << FragTrap::getName() << " appeared ! ( Constructor called)" << std::endl;
	setAttackDamage(30); // equivalent a appeler ptr this->
	setEnergyPoints(100);
	setHitpoints(100);

	return ;
}