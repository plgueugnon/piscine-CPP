#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void ) {

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character	*roger = new Character("roger"); // pas possible avec interface pour tester operator=

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	roger->equip(tmp);
	tmp = src->createMateria("cure");
	roger->equip(tmp);

	Character	*bob = new Character("bob");

	roger->use(0, *bob);
	roger->use(1, *bob);

	std::cout << "\nbob attempts something (nothing will happen)" << std::endl;
	bob->use(1, *roger); // rien

	std::cout << "\nbob attempts something again (something will happen)" << std::endl;
	*bob = *roger;
	bob->use(1, *roger); // se passe quelque chose
	bob->use(0, *roger);

	std::cout << "\nbob will attempt to equip and unequip" << std::endl;
	Ice	*iceball = new Ice("iceball");
	bob->use(2, *roger); // rien
	bob->unequip(2); // rien
	bob->equip(iceball);
	bob->use(2, *roger);
	bob->unequip(2);
	bob->use(2, *roger); // rien
	delete iceball;

	std::cout << "\n...............ending\n" << std::endl;

	delete bob;
	delete roger;
	delete src;

}