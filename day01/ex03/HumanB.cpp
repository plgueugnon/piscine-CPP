/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:07:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:07:41 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	
	return ;
}

HumanB::~HumanB(void) {
	
	return ;
}

void	HumanB::attack(void) const {
	
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;

	return ;
}

/* Here it is equivalent to saying &b = a then *ptr = &b */

void	HumanB::setWeapon(Weapon &weapon) {
	
	this->_weapon = &weapon;

	return ;
}