/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:07:33 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 09:07:33 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain {

public:

	/* Canonical */
	Brain( void );
	~Brain( void );
	Brain( Brain const &src );
	Brain	&operator=( Brain const &rhs );

	std::string _ideas[100];

};

#endif // __BRAIN_H__