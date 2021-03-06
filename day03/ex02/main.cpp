/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:47:40 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:47:40 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap        Lilith("Lilith");
	Lilith.attack("wall");
	Lilith.takeDamage(60);
	std::cout << Lilith.getName() << " has " << Lilith.getHitpoints() << " points of life left !" << std::endl;
	Lilith.beRepaired(25);
	std::cout << Lilith.getName() << " has " << Lilith.getEnergyPoints() << " points of energy left !" << std::endl;
	std::cout << Lilith.getName() << " has " << Lilith.getHitpoints() << " points of life left !" << std::endl;
	Lilith.highFivesGuys();

	std::cout << std::endl;
	std::cout << std::endl;

	return ( 0 );
}