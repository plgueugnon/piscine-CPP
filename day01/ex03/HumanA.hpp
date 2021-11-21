/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:00:55 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:07:48 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA {

	public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	/* METHOD */

	void	attack( void ) const;

	void	setWeapon( Weapon &weapon );

	private:

	std::string	_name;
	Weapon	&_weapon;

};

#endif // __HUMANA_H__