#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main( void ) {

	Animal	*Array[10]; // creation tableau de ptr de type animal
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

	*dog2 = *dog1; // tres important de derefencer les pointeurs sans quoi changement adresse
	// Dog *dog3( dog1 ); // ne fonctionne pas ??

	std::cout << "\n..After deep copy..\n" << std::endl;
	std::cout << dog1 << " " << dog1->getBrain() << " " << dog1->getBrain()->_ideas[0] << std::endl;
	std::cout << dog2 << " " << dog2->getBrain() << " " << dog2->getBrain()->_ideas[0] << std::endl;
	// std::cout << dog3 << " " << dog3->getBrain() << " " << dog3->getBrain()->_ideas[0] << std::endl;

	delete dog1;
	delete dog2;
	// delete dog3;

	std::cout << "\n...............................................\n" << std::endl;
	for (int j = 0; j < 10; j++) // suppression des ptr de class dans le tab
		delete Array[j];

	return ( 0 );
}