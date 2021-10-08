#include "easyfind.hpp"

int	main( void ) {

	std::cout << "____Testing with a vector____" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	try
	{
		::easyfind(v, 1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		::easyfind(v, 11);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "____Testing with a vector____" << std::endl;
	std::list<int> l;
	for(int i = 10; i < 20; i++)
		l.push_back(i);
	try
	{
		::easyfind(l, 11);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		::easyfind(l, 50);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return ( 0 );
}