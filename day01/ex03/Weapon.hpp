/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:09:05 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:09:12 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

class Weapon {

public:

	Weapon( std::string weapon );
	~Weapon( void );

/* METHOD */

	const std::string	getType( void ) const;
	void	setType( std::string );

private:

	std::string	_weapon;

};

#endif // __WEAPON_H__