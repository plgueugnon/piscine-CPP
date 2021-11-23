/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:13:16 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 11:22:47 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>

/* ************************************************************************** */
/* It would be better to use private inheritance to avoid our class being	  */
/* upcast to its base class which does not have a virtual destructor		  */
/* But the subject for this exercice asks to do it with public inheritance	  */
/* ************************************************************************** */
/* https://stackoverflow.com/questions/6806173/subclass-inherit-standard-containers */


template <typename T>
class Mutantstack : virtual public std::stack<T> {

public:


	/* Canonical */
	Mutantstack( void ) : std::stack<T>() { return ; };
	~Mutantstack( void ) {};
	Mutantstack( Mutantstack const &rhs ) : std::stack<T>( rhs ) {};
	Mutantstack	&operator=( Mutantstack const &rhs ) {
		
		if (this != &rhs)
			this->c = rhs.c;

		return ( *this );
	};

	/* Non canonical */

	/* we reuse the iterator of the container passed as apram */
	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	/* container received by std::stack is called c */
	iterator begin( void ) { return ( std::stack<T>::c.begin() ); };
	const_iterator begin( void ) const { return ( std::stack<T>::c.begin() ); };
	iterator end( void ) { return ( std::stack<T>::c.end() ); };
	const_iterator end( void ) const { return ( std::stack<T>::c.end() ); };

};

#endif // __MUTANTSTACK_H__