/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:04:21 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:04:21 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int	main( void ) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n...............................................\n" << std::endl;
	const WrongAnimal* WrA = new WrongAnimal();
	const WrongAnimal* WrC = new WrongCat();
	std::cout << WrA->getType() << " " << std::endl;
	std::cout << WrC->getType() << " " << std::endl;
	WrA->makeSound();
	WrC->makeSound();

	std::cout << "\n...............................................\n" << std::endl;
	delete j;
	delete i;
	delete meta;
	delete WrC;
	delete WrA;

	return ( 0 );
}