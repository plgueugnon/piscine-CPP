#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain {

public:

	/* Canonical */
	Brain( void );
	~Brain( void );
	Brain( Brain const &src );
	Brain	&operator=( Brain const &rhs );

	std::string _ideas[100];

};

#endif // __BRAIN_H__