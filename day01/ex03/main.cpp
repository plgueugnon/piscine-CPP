#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// dans les deux cas je suis obligé de passer une adresse car sinon je cree un doublon / copie de weapon

int	main( void ) {
	{
		// ref ici obligatoire car j'utilise une init dans constructeur of ref => obligatoirement init lors de sa creation
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club); // conversion implicite en ref (pas visible depuis main)
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	// par elimination, puisque par ref avant, par ptr ici
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return ( 0 );
}