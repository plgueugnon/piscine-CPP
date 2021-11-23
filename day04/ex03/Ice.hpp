/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:34:54 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:34:55 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria {

public:

	/* Canonical */
	Ice( void );
	~Ice( void );
	Ice( Ice const &src );
	Ice	&operator=( Ice const &rhs );

	/* Non canonical */
	Ice( std::string const &type );
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

};

#endif // __ICE_H__