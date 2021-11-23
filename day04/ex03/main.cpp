/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:37:42 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:37:42 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void ) {

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character	*roger = new Character("roger");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	roger->equip(tmp);
	tmp = src->createMateria("cure");
	roger->equip(tmp);

	Character	*bob = new Character("bob");

	roger->use(0, *bob);
	roger->use(1, *bob);

	std::cout << "\nbob attempts something (nothing will happen)" << std::endl;
	bob->use(1, *roger);

	std::cout << "\nbob attempts something again (something will happen)" << std::endl;
	*bob = *roger;
	bob->use(1, *roger);
	bob->use(0, *roger);

	std::cout << "\nbob will attempt to equip and unequip" << std::endl;
	Ice	*iceball = new Ice("iceball");
	/* nothing will happen */
	bob->use(2, *roger);
	bob->unequip(2);
	/* something will happen */
	bob->equip(iceball);
	bob->use(2, *roger);
	bob->unequip(2);
	/* nothing will happen */
	bob->use(2, *roger);
	delete iceball;

	std::cout << "\n...............ending\n" << std::endl;

	delete bob;
	delete roger;
	delete src;

}