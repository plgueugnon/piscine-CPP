/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:51:11 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:51:13 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

#define HEALTH 10
#define NRJ 10
#define DMG 0

class ClapTrap {

public:

	/* Canonical */
	ClapTrap( void );
	ClapTrap( ClapTrap const &src );
	~ClapTrap( void );
	ClapTrap	&operator=( ClapTrap const &rhs );

	/* Non canonical */
	ClapTrap( std::string str );
	

	void	attack( std::string const &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string	getName( void ) const;
	unsigned int	getHitpoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getAttackDamage( void ) const;

	void	setName( std::string str );
	void	setHitpoints( unsigned int );
	void	setEnergyPoints( unsigned int );
	void	setAttackDamage( unsigned int );

/* it is easier to have all here as protected to avoid the limitation of private (and the use of getter and setter) */
protected: 

	std::string	_name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;

};

#endif