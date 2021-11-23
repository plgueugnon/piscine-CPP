/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:03:11 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:03:25 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {

public:

	/* Canonical */
	Cat( void );
	~Cat( void );
	Cat( Cat const &src );
	Cat	&operator=( Cat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;

};

#endif // __CAT_H__