/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:41:29 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:46:09 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

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