#include "Zombie.hpp"

Zombie::Zombie( std::string zombie_name ) : _name( zombie_name ) {

	Zombie::announce();
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

Zombie::~Zombie( void ) {

	Zombie::announce();
	std::cout << " hhhhhu no braiiinzzzZ... me leaving" << std::endl;

	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name;

	return ;
}