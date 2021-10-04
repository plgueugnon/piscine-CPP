#include "iter.hpp"

template <typename T>
void	print( T &ref ) {

	std::cout << "value = " << ref << std::endl;

	return ;
}

void	increment_int_array( int &ref ) {

	ref++;

	return ;
}

void	revert_string( std::string &ref ) {

	std::string ha = "haha!";
	ref.swap(ha);
}

int	main( void ) {

	int	size = 10;
	int	int_array[10] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 0};
	std::string	str_array[10] = { "rat", "souris", "oiseau", "pigouin", "tube", "merle", "yo", "wesh", "biere", "cast"};

	::iter(int_array, size, print);
	::iter(int_array, size, increment_int_array);
	::iter(int_array, size);

	std::cout << "......................................................." << std::endl;

	::iter(str_array, size, print);
	::iter(str_array, size, revert_string);
	::iter(str_array, size);

	return ( 0 );
}