/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:31:50 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 12:31:51 by pgueugno         ###   ########.fr       */
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

	/* Non canonical */
	Fixed( const float f);
	Fixed( const int i );

	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	Fixed	operator+( Fixed const &rhs );	
	Fixed	operator-( Fixed const &rhs );
	Fixed	operator*( Fixed const &rhs );
	Fixed	operator/( Fixed const & rhs );
	Fixed	&operator++( void );
	Fixed	operator++(int);
	Fixed	&operator--( void );
	Fixed	operator--(int);

	int	getRawBits( void ) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int	toInt( void ) const;

	static Fixed&	max( Fixed &lhs, Fixed &rhs );
	static Fixed&	min( Fixed &lhs, Fixed &rhs );

	static const Fixed&	max( Fixed const &lhs, Fixed const &rhs );
	static const Fixed&	min( Fixed const &lhs, Fixed const &rhs );

private:

	int	_fixed;
	static int	_bits;

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif // __FIXED_H__