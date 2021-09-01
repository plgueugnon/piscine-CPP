#include "Karen.hpp"

int	main(int argc, char **argv) {

	if (argc > 1)
	{
		Karen	instance;
		instance.complain(argv[1]);
	}
	
	return ( 0 );
}


