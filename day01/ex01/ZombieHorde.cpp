/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:50:04 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:50:05 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name) {

	Zombie  *instance = new Zombie[N];

	for (int i = 0; i < N; i++)
		instance[i].setName( name, i );
	return (instance);
}