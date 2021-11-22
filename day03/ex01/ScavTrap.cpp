/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:42:47 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:42:48 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Canonical */
ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap default constructor called" << std::endl;

	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap " << _name << " finally died thank god !"<< "(Destructor called)" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	std::cout << "(ScavTrap assignement operator called)" << std::endl;
	if (this != &rhs )
		ClapTrap::operator=(rhs);

	return ( *this );
}

ScavTrap::ScavTrap( ScavTrap const &src ) {

	std::cout << "Is it a mirror or did ScavTrap cloned himself ? (Copy constructor called)" << std::endl;
	*this = src;

	return ;
}

/*****************************************************************************/

void	ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << _name << " has enterred gate keeper mode" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap( str ) {

	std::cout << "Ho no ! A ScavTrap " << _name << " appeared ! ( Constructor called)" << std::endl;
	_AttackDamage = 20;
	_HitPoints = 100;
	_EnergyPoints = 50;

	std::cout << "......................................" << std::endl;
	std::cout << _name << " has " << _HitPoints << " health points !" << std::endl;
	std::cout << _name << " has " << _EnergyPoints << " energy points !" << std::endl;
	std::cout << _name << " has " << _AttackDamage << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}