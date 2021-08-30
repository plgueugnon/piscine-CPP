#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int main(void) {

	Zombie *instance = newZombie("Roger");
	randomChump("Maurice"); // meurt dès la fin de la fonction
	delete instance; // Roger ne meurt que lorsque je supprime son instance

	return (0);
}