/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:05 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/20 11:25:06 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.h"

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

std::string	Contact::getstr(int v) const {

	if (v < 0 || v > 5)
		return (NULL);
	return (this->m_info[v]);
}

static int	err_prompt(std::string str) {

	std::cerr << RED << str << RST << std::endl;
	return (0);
}

static int	is_isalnum_and_space(std::string str) {

	int	i = 0;

	while (i < (int)str.size())
	{
		if (!std::isalnum(str[i]) && !std::isspace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_isdigit_and_space(std::string str) {

	for (int i = 0; i < (int)str.size(); i++)
		if (!std::isdigit(str[i]) && !std::isspace(str[i]))
			return (0);
	return (1);
}

static int	is_only_space(std::string str) {

	for (int i = 0; i < (int)str.size(); i++)
		if (std::isalnum(str[i]) && !std::isspace(str[i]))
			return (1);
	return (0);
}

int	Contact::setstr(std::string info, int v) {

	if (info.size() > 20)
		return (err_prompt("Error : input max is 20 characters"));
	else if (!is_isalnum_and_space(info))
		return (err_prompt("Error : input must be alphanumeric characters"));
	else if (v < 0 || v > 5)
		return (err_prompt("Error : input limited to 5 five field"));
	else if (!is_only_space(info) || info.size() == 0 || info[0] == '\0')
		return (err_prompt("Error : empty line is not a valid input"));
	else if (v == phone_number && !is_isdigit_and_space(info))
		return (err_prompt("Error : input must be digit and/or spaces"));
	this->m_info[v] = info;
	return (1);
}