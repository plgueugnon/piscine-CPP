/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:38:41 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:38:42 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#define INDEX 4

class MateriaSource : public IMateriaSource {

private:

	AMateria	*_storage[INDEX];

public:

	/* Canonical */
	MateriaSource( void );
	~MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	MateriaSource	&operator=( MateriaSource const &rhs );

	/* Non canonical */
	void	learnMateria( AMateria *m );
	AMateria	*createMateria( std::string const &type );

};

#endif // __MATERIASOURCE_H__