#include <iostream>
#include <cmath>
#include <limits>
#include <string>

std::string	keyword[] = { "nan", "nanf", "-inf", "inf", "inff", "-inff" };

int	char_convert( std::string s ) {


}

int	main(int argc, char **argv) {

	bool	nan = false;

	if ( argc == 2 || argv == NULL )
	{
		char_convert( argv[1] );
	}
	else
		std::cerr << "ERROR: invalid input\nValid input = ./program <arg>" << std::endl;

	return (0);
}