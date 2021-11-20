/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:24:53 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/20 11:24:53 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "phonebook.h"

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	getstr(int v) const;
	int			setstr(std::string info, int v);

private:

	std::string	m_info[5];

};

#endif