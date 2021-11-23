/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:19:52 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:27:05 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main( void ) {

/* ************************************************************************** */
/* We can't instantiate an object of class Animal alone as it is an abstract  */
/* class (it will not compile) but we can instantiate subclass Animal-Dog or  */
/* Animal-Cat																  */
/* ************************************************************************** */

	/* Animal a; */ /* (will not compile) */

	Animal	*Array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			Array[i] = new Dog();
		else
			Array[i] = new Cat(); 
	}

	std::cout << "\n...............................................\n" << std::endl;

	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog();

	dog1->setBrain("wouf");

	std::cout << "\n..Before deep copy..\n" << std::endl;
	std::cout << dog1 << " " << dog1->getBrain() << " " << dog1->getBrain()->_ideas[0] << std::endl;
	std::cout << dog2 << " " << dog2->getBrain() << " " << dog2->getBrain()->_ideas[0] << std::endl;

/* ************************************************************************** */
/* Here we have to dereference pointers to avoid modifying their adresses	  */
/* ************************************************************************** */

	*dog2 = *dog1;

	std::cout << "\n..After deep copy..\n" << std::endl;
	std::cout << dog1 << " " << dog1->getBrain() << " " << dog1->getBrain()->_ideas[0] << std::endl;
	std::cout << dog2 << " " << dog2->getBrain() << " " << dog2->getBrain()->_ideas[0] << std::endl;

	delete dog1;
	delete dog2;

	std::cout << "\n...............................................\n" << std::endl;
	for (int j = 0; j < 10; j++)
		delete Array[j];

	return ( 0 );
}