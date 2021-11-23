/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:03:58 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:03:59 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {

public:

	/* Canonical */
	Dog( void );
	~Dog( void );
	Dog( Dog const &src );
	Dog	&operator=( Dog const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;

};

#endif // __DOG_H__