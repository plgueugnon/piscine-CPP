#include "mutantstack.hpp"

int	main( void ) {

	Mutantstack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "____getting last value____" << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "____getting size value____" << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	Mutantstack<int>::iterator it = mstack.begin();
	Mutantstack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "____listing all values____" << std::endl;
	while ( ++it != ite )
		std::cout << *it << std::endl;

	/* pour que cet exemple marche on est oblige d'heriter publiquement de stack pour faire cet upcast */
	std::stack<int>	s(mstack);
	return ( 0 );
}