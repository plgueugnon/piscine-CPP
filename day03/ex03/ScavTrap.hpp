/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:59:23 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:59:26 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	/* Canonical */
	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap	&operator=( ScavTrap const &rhs );
	ScavTrap( ScavTrap const &src );

	/* Non canonical */
	void	guardGate( void );
	ScavTrap( std::string str );

};


#endif