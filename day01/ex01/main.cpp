/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:46:58 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:46:58 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name);

int main(void) {

	Zombie *instance = zombieHorde( 10, "Roger");
	for(int i = 0; i < 10; i++)
		instance[i].announce();

	delete [] instance;

	return (0);
}