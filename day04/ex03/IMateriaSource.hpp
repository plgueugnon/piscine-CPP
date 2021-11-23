/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:35:18 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:35:18 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include "AMateria.hpp"

class IMateriaSource {

public:

	virtual ~IMateriaSource( void ) {};
	virtual void	learnMateria( AMateria * ) = 0;
	virtual AMateria	*createMateria( std::string const &type ) = 0;

};


#endif // __IMATERIASOURCE_H__