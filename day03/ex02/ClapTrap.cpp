/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:47:04 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:47:13 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	this->_AttackDamage = rhs._AttackDamage;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_HitPoints = rhs._HitPoints;

	return ( *this );
}

/*****************************************************************************/

std::string	ClapTrap::getName( void ) const {

	return ( _name );
}

unsigned int	ClapTrap::getHitpoints( void ) const {

	return ( _HitPoints );
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {

	return ( _EnergyPoints );
}

unsigned int	ClapTrap::getAttackDamage( void ) const {

	return ( _AttackDamage );
}

void	ClapTrap::setHitpoints( unsigned int value ) {

	_HitPoints = value;

	return ;
}

void	ClapTrap::setEnergyPoints( unsigned int value ) {

	_EnergyPoints = value;

	return ;
}

void	ClapTrap::setAttackDamage( unsigned int value ) {

	_AttackDamage =  value;

	return ;
}

void	ClapTrap::setName( std::string str ) {

	_name = str;

	return ;
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