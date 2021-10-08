#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <string>

class ValueNotFound : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

const char	*ValueNotFound::what( void ) const throw() {

	return ( "Error: value not found in container" );
}

template <typename T>
void	easyfind( T t, int i ) {

	if ( std::find(t.begin(), t.end(), i) != t.end() )
	{
		std::cout << "Value found in container" << std::endl;
		return ;
	}
	throw	ValueNotFound();
}



#endif // __EASYFIND_H__