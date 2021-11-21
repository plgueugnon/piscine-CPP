/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:45:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:45:42 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

/* when i call randomChump, the object instanciated is destroyed immediatly after */
/* whereas the zombie roger is destroyed only when delete is called */

int main(void) {

	Zombie *instance = newZombie("Roger");
	randomChump("Maurice");
	delete instance;

	return (0);
}