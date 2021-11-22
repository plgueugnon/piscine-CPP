/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:54:02 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:56:45 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* ************************************************************************** */
/* ClapTrap( str + "_clap_name" ) = concat of both strings					  */
/* we have to assign value to _Hitpoints etc here or else ClapTrap values	  */
/* will be taken instead													  */
/* ************************************************************************** */

DiamondTrap::DiamondTrap( std::string str ) : ClapTrap( str + "_clap_name"), _name(str) {

	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;

	std::cout << "......................................" << std::endl;
	std::cout << _name << " has " << _HitPoints << " health points !" << std::endl;
	std::cout << _name << " has " << _EnergyPoints << " energy points !" << std::endl;
	std::cout << _name << " has " << _AttackDamage << " attack points !" << std::endl;
	std::cout << "......................................" << std::endl;

	return ;
}

/* ************************************************************************** */
/* here _name variable of class diamondTrap is called, "shadowing" the		  */
/* variable of the same name of class ClapTrap								  */
/* ************************************************************************** */

void	DiamondTrap::whoAmI( void ) {

	std::cout << "As ClapTrap my name is " << ClapTrap::getName();
	std::cout << " and as DiamondTrap my name is " << DiamondTrap::_name << std::endl;

	return ;
}
