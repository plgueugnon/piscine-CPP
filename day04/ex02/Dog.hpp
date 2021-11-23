/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:19:40 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:19:40 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:

	Brain *_brain;

public:

	/* Canonical */
	Dog( void );
	~Dog( void );
	Dog( Dog const &src );
	Dog	&operator=( Dog const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
	void	setBrain(  std::string s );

};

#endif // __DOG_H__