#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {

public:

// methods
	// Canonical form //
	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );

	Fixed	&operator=( Fixed const &rhs );
	
	// Non canonical //
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
	Fixed	&operator++( void ); // Prefix increment operator.
	Fixed	operator++(int); // Postfix increment operator.
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

// attributes

private:

// methods

// attributes
	int	_fixed;
	static int	_bits;

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif // __FIXED_H__