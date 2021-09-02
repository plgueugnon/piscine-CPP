#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {

public:

// methods
	// Canonical form //
	Fixed( void ); // constructeur par defaut
	Fixed( Fixed const &src ); // constructeur par copie prenant une instance de la class pour en faire une copie
	~Fixed( void ); // destructeur par defaut -> a faire avec virtual plus tard

	Fixed	&operator=( Fixed const &rhs ); // fonction de surcharge de l'opérateur =
	
	// Non canonical form //
	Fixed( const float f);
	Fixed( const int i );


	int	getRawBits( void ) const;
	void	setRawBits(int const raw);

	float	toFloat( void ) const;
	int	toInt( void ) const;


// attributes

private:

// methods

// attributes
	int	_fixed;
	static int	_bits;

};

// lhs = membre gauche et rhs = membre droite
// pas possible de prendre lhs / sa propre class en valeur retour => car ostream gere par class ostream et qu'on ne peut pas en modifier le code
// plutot que de faire une surcharge sur fonction membre on fait une simple fonction de surcharge
// on fait donc fonction qui renvoie ref sur class ostream, avec en param une ref sur instance de ostream et en 2e param ma class
// permet de chainer les redirections pour les affichages

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif // __FIXED_H__