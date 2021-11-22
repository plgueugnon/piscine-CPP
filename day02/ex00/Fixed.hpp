/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:13:06 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 10:13:06 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

class Fixed {

public:

	/* Canonical form */
	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );
	Fixed	&operator=( Fixed const &rhs );

	// Non canonical form //
	int	getRawBits( void ) const;
	void	setRawBits(int const raw);

private:

	int	_fixed;
	static int	_fractionnal;

};

#endif // __FIXED_H__