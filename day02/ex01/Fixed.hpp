/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:01:38 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 11:45:20 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {

public:

	/* Canonical form */
	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );
	Fixed	&operator=( Fixed const &rhs );
	
	/* Non canonical form */
	Fixed( const float f);
	Fixed( const int i );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int	toInt( void ) const;

private:

	int	_fixed;
	static int	_bits;

};

/* ************************************************************************** */
/* lhs is the object to the left and rhs the object to the right			  */
/* if the function were a member of a class object the overload of ostream	  */
/* would not work as it would mean return lhs to itself						  */
/* To resolve this issue we create an overload function outside of the class, */
/* taking a reference to class ostream and a reference to our own class		  */
/* ************************************************************************** */

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif // __FIXED_H__