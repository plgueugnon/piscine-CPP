#include "Zombie.hpp"

// Zombie	*newZombie( std::string name );
// void	randomChump( std::string name );

Zombie  *zombieHorde( int N, std::string name);

int main(void) {

	// Zombie *instance = newZombie("Roger");
	// randomChump("Maurice"); // meurt dès la fin de la fonction
	// delete instance; // Roger ne meurt que lorsque je supprime son instance

	Zombie *instance = zombieHorde( 10, "Roger");
	for(int i = 0; i < 10; i++)
		instance[i].announce();

	delete [] instance;

	return (0);
}