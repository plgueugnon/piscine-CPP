/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:16:31 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:17:50 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

/* ************************************************************************** */
/* _type value is only instantiated in derived class						  */
/* ************************************************************************** */

class Animal {

protected:

	std::string	_type;

public:

	/* canonical */
	Animal( void );
	virtual ~Animal( void );
	Animal( Animal const &src );
	virtual Animal	&operator=( Animal const &rhs );

	/* Non canonical */
	virtual void	makeSound( void ) const = 0;
	virtual std::string	getType( void ) const;

};

#endif // __ANIMAL_H__