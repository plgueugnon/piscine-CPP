/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:07:47 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:07:47 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:

	Brain *_brain;

public:

	/* Canonical */
	Cat( void );
	~Cat( void );
	Cat( Cat const &src );
	Cat	&operator=( Cat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
	void	setBrain(  std::string s );

};

#endif // __CAT_H__