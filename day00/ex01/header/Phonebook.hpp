/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:24:55 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/20 11:24:56 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phonebook.h"

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	Contact	contact[8];
	
	int	getindex(void) const;
	int	setindex(int i);

private:

	int	m_index;

};

#endif