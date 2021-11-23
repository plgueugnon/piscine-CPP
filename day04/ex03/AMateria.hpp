/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:28:37 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:28:38 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:

	std::string	_type;

public:

	/* Canonical */
	AMateria( void );
	virtual ~AMateria( void );
	AMateria( AMateria const &src );
	AMateria	&operator=( AMateria const &rhs );

	/* Non canonical */
	AMateria( std::string const &type );
	std::string const	&getType( void ) const;
	virtual AMateria	*clone( void ) const = 0;
	virtual void	use( ICharacter	&target );

};

#endif // __AMATERIA_H__