/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:07:13 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 11:07:13 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

class Span {

public:

	/* Canonical */
	Span( void );
	~Span( void );
	Span( Span const &rhs );
	Span	&operator=( Span const &rhs );

	/* Non canonical */
	Span( unsigned int size );
	void	addNumber( int n );
	unsigned int	shortestSpan( void ) const;
	unsigned int	longestSpan( void ) const;
	unsigned int	getSize( void ) const;
	std::vector<int>	getVector( void ) const;

private:

	unsigned int	_size;
	std::vector<int>	_v;

};

class NothingToFind : std::exception {

public:

	virtual const char	*what( void ) const throw();

};

class SizeLimitReached : std::exception {

public:

	SizeLimitReached(unsigned int size) : _maxSize(size) {}
	virtual const char	*what( void ) const throw();

private:

	unsigned int 	_maxSize;

};

#endif // __SPAN_H__