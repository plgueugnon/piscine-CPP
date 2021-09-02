#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

class Fixed {

public:

// methods
	// Canonical form //
	Fixed( void ); // constructeur par defaut
	Fixed( Fixed const &src ); // constructeur par copie prenant une instance de la class pour en faire une copie
	~Fixed( void ); // destructeur par defaut -> a faire avec virtual plus tard

	Fixed	&operator=( Fixed const &rhs ); // fonction de surcharge de l'opérateur =
	
	// Non canonical form //
	int	getRawBits( void ) const;
	void	setRawBits(int const raw);

// attributes

private:

// methods

// attributes
	int	_fixed;
	static int	_fractionnal;

};

#endif // __FIXED_H__