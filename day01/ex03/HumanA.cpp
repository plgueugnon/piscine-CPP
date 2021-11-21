/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:51:52 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:00:26 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* The address of the object weapon (pointer or reference) is passed as argument in constructor */
/* without it, we would be creating a copy of the object meaning it would be created twice */

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	
	return ;
}

HumanA::~HumanA(void) {
	
	return ;
}

void	HumanA::attack(void) const {
	
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

	return ;
}

/* Here we take the address of weapon object by reference */

void	HumanA::setWeapon(Weapon &weapon) {
	
	this->_weapon = weapon;

	return ;
}
