// #include "ScavTrap.hpp"
// #include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	test_ex00( void ) {

	std::cout << "..................... Begining test ex00 ....................." << std::endl;
	ClapTrap	Roger("Roger");
	ClapTrap	Dummy(Roger);
	ClapTrap	Feeble;

	Feeble = ClapTrap("Feeble");

	Roger.attack(Dummy.getName());
	Dummy.takeDamage(DMG);
	Dummy.attack(Roger.getName());
	Roger.attack(Feeble.getName());
	Feeble.takeDamage(10);
	std::cout << "\n" << std::endl;
}

void	test_ex01( void ) {

	std::cout << "\033[33m..................... Begining test ex01 .....................\033[0m" << std::endl;
	FragTrap	Lilith("Lilith");
	Lilith.attack("wall");
	Lilith.takeDamage(60);
	std::cout << Lilith.getName() << " has " << Lilith.getHitpoints() << " points of life left !" << std::endl;
	Lilith.beRepaired(25);
	std::cout << Lilith.getName() << " has " << Lilith.getEnergyPoints() << " points of energy left !" << std::endl;
	std::cout << Lilith.getName() << " has " << Lilith.getHitpoints() << " points of life left !" << std::endl;
	Lilith.highFivesGuys();
	std::cout << "\n" << std::endl;
}

void	test_ex02( void ) {

	std::cout << "\033[33m..................... Begining test ex02 .....................\033[0m" << std::endl;
	ScavTrap	Dumdum("Dumdum");
	Dumdum.attack("stone");
	Dumdum.takeDamage(30);
	std::cout << Dumdum.getName() << " has " << Dumdum.getHitpoints() << " points of life left !" << std::endl;
	Dumdum.beRepaired(10);
	std::cout << Dumdum.getName() << " has " << Dumdum.getEnergyPoints() << " points of energy left !" << std::endl;
	std::cout << Dumdum.getName() << " has " << Dumdum.getHitpoints() << " points of life left !" << std::endl;
	Dumdum.guardGate();
	std::cout << "\n" << std::endl;
}

void	test_ex03( void ) {

	std::cout << "\033[33m..................... Begining test ex03 .....................\033[0m" << std::endl;
	DiamondTrap	Belzebuth("Belzebuth");
	Belzebuth.ClapTrap::attack("nothing");
	Belzebuth.guardGate(); // autre ecriture possible 	Belzebuth.ScavTrap::guardGate();
	Belzebuth.highFivesGuys();
	Belzebuth.whoAmI();
	std::cout << "\n" << std::endl;
}

int	main( void ) {

	test_ex00();
	std::cout << "\033[33m..................... .................. .....................\033[0m\n\n" << std::endl;
	test_ex01();
	std::cout << "\033[33m..................... .................. .....................\033[0m\n\n" << std::endl;
	test_ex02();
	std::cout << "\033[33m..................... .................. .....................\033[0m\n\n" << std::endl;
	test_ex03();

	return ( 0 );
}