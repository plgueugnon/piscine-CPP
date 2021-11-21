/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:08:04 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:08:04 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB {

	public:

	HumanB( std::string name );
	~HumanB( void );

	/* METHOD */

	void	attack( void ) const;

	void	setWeapon( Weapon &weapon );

	private:

	std::string	_name;
	Weapon	*_weapon;

};

#endif // __HUMANB_H__