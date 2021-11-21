/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:46:03 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:46:04 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zombie_name ) : _name( zombie_name ) {

	Zombie::announce();
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

Zombie::~Zombie( void ) {

	Zombie::announce();
	std::cout << " hhhhhu no braiiinzzzZ... me leaving" << std::endl;

	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name;

	return ;
}