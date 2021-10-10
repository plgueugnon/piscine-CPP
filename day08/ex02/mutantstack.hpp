#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>

/* https://stackoverflow.com/questions/6806173/subclass-inherit-standard-containers */
/* private inheritance to avoid our class being upcast to its base class which does not have a virtual destructor */

template <typename T>
class Mutantstack : virtual public std::stack<T> {

// private:

// 	typedef std::stack<T>	base_stack; // nommage conteneur herite pour pouvoir y acceder a ses attributs uniquement dans ma class mutantclass

public:

	/* getting access to all the functions defines in the base class*/
	/* inherited functions from base class std::stack */ 
	// using base_stack::push;
	// using base_stack::top;
	// using base_stack::empty;
	// using base_stack::size;
	// using base_stack::pop;
	// using base_stack::operator=;

	/* Canonical */
	Mutantstack( void ) : std::stack<T>() { return ; };
	~Mutantstack( void ) {}; // pas virtuel donc pas possible de substituer les fonctions de std::class // pas poss redefinir destructor
	Mutantstack( Mutantstack const &rhs ) : std::stack<T>( rhs ) {};
	Mutantstack	&operator=( Mutantstack const &rhs ) {
		
		if (this != &rhs)
			this->c = rhs.c;

		return ( *this );
	}; // on ne fait que réutiliser les fonctions de std::stack

	/* Non canonical */
	typedef typename std::stack<T>::container_type::iterator	iterator; // permet d'utiliser l'iterateur du container passé en param
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	iterator begin( void ) { return ( std::stack<T>::c.begin() ); }; // le conteneur recu par std::stack a pour valeur c
	const_iterator begin( void ) const { return ( std::stack<T>::c.begin() ); };
	iterator end( void ) { return ( std::stack<T>::c.end() ); };
	const_iterator end( void ) const { return ( std::stack<T>::c.end() ); };

};

#endif // __MUTANTSTACK_H__