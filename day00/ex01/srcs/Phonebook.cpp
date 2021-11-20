/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:28 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/20 11:25:28 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.h"

Phonebook::Phonebook(void) : m_index(0) {

	return ;
}

Phonebook::~Phonebook(void) {

	return ;
}

int	Phonebook::getindex(void) const {

	return (this->m_index);
}

int	Phonebook::setindex(int i) {

	if (i < 0 || i > 8)
		return (0);
	if (i < 8)
		this->m_index++;
	else if (i == 8)
		this->m_index = 0;
	return (1);
}