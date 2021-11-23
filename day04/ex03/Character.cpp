/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:28:50 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:32:47 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Canonical */
Character::Character( void ) : _name("unknown") {

	std::cout << "Default Character constructor called" << std::endl;
	for(int i = 0; i < INDEX; i++)
		_inventory[i] = NULL;

	return ;
}

Character::~Character( void ) {

	std::cout << _name << " just died (destructor called)" << std::endl;
	for (int i = 0; i < INDEX; i++)
		if ( _inventory[i] )
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}

	return ;
}

Character::Character( Character const &src ) {

	*this = src;

	return ;
}

Character	&Character::operator=( Character const &rhs ) {

	if ( this != &rhs )
		for (int i = 0; i < INDEX; i++)
		{
			delete _inventory[i];
			if ( rhs._inventory[i] )
				_inventory[i] = rhs._inventory[i]->clone();
		}

	return ( *this );
}

/* Non canonical */
Character::Character( std::string const &name) : _name(name) {

	std::cout << _name << " is born, hallelujah ! (constructor called)" << std::endl;
	for(int i = 0; i < INDEX; i++)
		_inventory[i] = NULL;

	return ;
}

std::string const	&Character::getName( void ) const {

	return ( _name );
}

void	Character::equip( AMateria *m ) {

	for(int i = 0; i < INDEX; i++)
	{	if ( _inventory[i] == m )
			return ;
		if ( _inventory[i] == NULL )
		{
			_inventory[i] = m;
			std::cout << "DEBUG : item at " << i << " " << _inventory[i]->getType() << " equiped" << std::endl;
			return ;
		}
	}
	std::cout << "DEBUG : Inventory full" << std::endl;

	return ;
}

/* ************************************************************************** */
/* Must not unequip a materia not learned form MateriaSource				  */
/* ************************************************************************** */

void	Character::unequip( int idx ) {

	if ( idx < 0 || idx >= INDEX )
		return ;
	if ( _inventory[idx] )
		std::cout << "DEBUG : item " << idx << " " << _inventory[idx]->getType() << " unequiped" << std::endl;
	_inventory[idx] = NULL;

	return ;
}

void	Character::use( int idx, ICharacter &target ) {

	if ( _inventory[idx] )
		_inventory[idx]->use( target );

	return ;
}