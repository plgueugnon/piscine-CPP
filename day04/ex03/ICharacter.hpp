/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:35:14 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:35:15 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter {

public:

	virtual ~ICharacter( void ) {}
	virtual std::string const	&getName( void ) const = 0;
	virtual void	equip( AMateria *m ) = 0;
	virtual void	unequip( int idx ) = 0;
	virtual void	use( int idx, ICharacter &target ) = 0;

};

#endif // __ICHARACTER_H__