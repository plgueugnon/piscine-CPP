/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:55 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:42:55 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"
#include "AMateria.hpp"
#define INDEX 4

class Character : public ICharacter {

private:

	std::string	_name;
	AMateria	*_inventory[INDEX];

public:

	/* Canonical */
	Character( void );
	~Character( void );
	Character( Character const &src );
	Character	&operator=( Character const &rhs );

	/* Non canonical */
	Character( std::string const &name );
	std::string const	&getName( void ) const;
	void	equip( AMateria *m );
	void	unequip( int idx );
	void	use( int idx, ICharacter &target );

};


#endif // __CHARACTER_H__