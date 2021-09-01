#include "Karen.hpp"

int	main(int argc, char **argv) {

	if (argc == 2)
	{
		Karen	instance;
		instance.complain(argv[1]);
		return ( 0 );
	}
	std::cerr << "Error: choose one of DEBUG | INFO | WARNING | ERROR as input" << std::endl;

	return ( 1 );
}


