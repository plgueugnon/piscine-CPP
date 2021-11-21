/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:47:10 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:47:23 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zombie_name ) : _name( zombie_name ) {

	Zombie::announce();

	return ;
}

Zombie::Zombie( void ) {

	return ;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name;
	std::cout << " hhhhhu no braiiinzzzZ... me leaving" << std::endl;

	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name;
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

void	Zombie::setName( const std::string name, int N) {

	this->_name.assign(name);
	this->_name.push_back(N + 48);
	return ;
}