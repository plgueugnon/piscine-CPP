#include "Zombie.hpp"

Zombie::Zombie( std::string zombie_name ) : _name( zombie_name ) {

	Zombie::announce();

	return ;
}

Zombie::Zombie( void ) { // constructeur par defaut - ne fait rien et est appele si 0 arg

	return ;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name;
	std::cout << " hhhhhu no braiiinzzzZ... me leaving" << std::endl;

	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name;
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

void	Zombie::setName( const std::string name, int N) {

	this->_name.assign(name);
	this->_name.push_back(N + 48);
	return ;
}