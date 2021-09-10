#include "ScavTrap.hpp"

int	main( void ) {

	ClapTrap	Roger("Roger");
	ClapTrap	Dummy(Roger);
	ClapTrap	Feeble;

	Feeble = ClapTrap("Feeble");

	Roger.attack(Dummy.getName());
	Dummy.takeDamage(DMG);
	Dummy.attack(Roger.getName());
	Roger.attack(Feeble.getName());
	Feeble.takeDamage(10);

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap	Dumdum("Dumdum");
	Dumdum.attack("stone");
	Dumdum.takeDamage(30);
	std::cout << Dumdum.getName() << " has " << Dumdum.getHitpoints() << " points of life left !" << std::endl;
	Dumdum.beRepaired(10);
	std::cout << Dumdum.getName() << " has " << Dumdum.getEnergyPoints() << " points of energy left !" << std::endl;
	std::cout << Dumdum.getName() << " has " << Dumdum.getHitpoints() << " points of life left !" << std::endl;
	Dumdum.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;

	return ( 0 );
}