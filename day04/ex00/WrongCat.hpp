/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:04:50 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:04:50 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	/* Canonical */
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const &src );
	WrongCat	&operator=( WrongCat const &rhs );

	/* Non canonical */
	void	makeSound( void ) const;

};

#endif // __WRONGCAT_H__