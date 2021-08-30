#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name) {

    // Zombie  *instance = new Zombie(name)[N];

    // Zombie  instance[N] = new Zombie(name);

    Zombie  *instance = new Zombie[N];

    for (int i = 0; i < N; i++)
        instance[i].setName( name, i );
        // Zombie::setName( name, i );
        // instance[i](name)
    return (instance);
}