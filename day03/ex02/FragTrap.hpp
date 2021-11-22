/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:47:36 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/22 13:47:37 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	/* Canonical */
	FragTrap( void );
	~FragTrap( void );
	FragTrap	&operator=( FragTrap const &rhs );
	FragTrap( FragTrap const &src );

	/* Non canonical */
	void	highFivesGuys( void );
	FragTrap( std::string str );

};

#endif