/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:57:09 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:57:10 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	/* Canonical */
	DiamondTrap( void );
	~DiamondTrap( void );
	DiamondTrap	&operator=( DiamondTrap const &rhs );
	DiamondTrap( DiamondTrap const &src );

	/* Non canonical */
	DiamondTrap( std::string str );
	void	attack( std::string const &target );
	void	whoAmI( void );

private:

	std::string	_name;

};

#endif // __DIAMONDTRAP_H__