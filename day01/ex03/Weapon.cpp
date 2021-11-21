/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:08:59 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:09:00 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) : _weapon(weapon) {
	
	return ;
}

Weapon::~Weapon( void ) {
	
	return ;
}

const std::string	Weapon::getType( void ) const {
	
	return ( this->_weapon );
}

void	Weapon::setType( std::string weapon_type ) {
	
	this->_weapon = weapon_type;

	return ;
}
