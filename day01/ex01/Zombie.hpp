/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:48:53 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 22:48:54 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:

	std::string	_name;

public:

	void	announce( void ) const;
	void	setName( const std::string name, int N );

	Zombie( std::string zombie_name );
	Zombie( void );
	~Zombie( void );

};

#endif