/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:34:06 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:34:07 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	/* Canonical */
	Cure( void );
	~Cure( void );
	Cure( Cure const &src );
	Cure	&operator=( Cure const &rhs );

	/* Non canonical */
	Cure( std::string const &type );
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

};

#endif // __CURE_H__