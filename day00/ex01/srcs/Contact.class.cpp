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

int	is_isalnum_and_space(std::string str) {

	int	i = 0;

	while (i < (int)str.size())
	{
		if (!std::isalnum(str[i]) && !std::isspace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_isdigit_and_space(std::string str) {

	for (int i = 0; i < (int)str.size(); i++)
		if (!std::isdigit(str[i]) && !std::isspace(str[i]))
			return (0);
	return (1);
}

int	is_only_space(std::string str) {

	for (int i = 0; i < (int)str.size(); i++)
		if (std::isalnum(str[i]) && !std::isspace(str[i]))
			return (1);
	return (0);
}

int	Contact::setstr(std::string info, int v) {

	if (info.size() > 20)
		return (error_prompt("Error : input must be of 20 characters maximum"));
	else if (!is_isalnum_and_space(info))
		return (error_prompt("Error : input must contain alphanumeric characters"));
	else if (v < 0 || v > 5)
		return (error_prompt("Error : there cannot be more than 5 five field in entry"));
	else if (!is_only_space(info) || info.size() == 0 || info[0] == '\0')
		return (error_prompt("Error : an empty line is not a valid input"));
	else if (v == phone_number && !is_isdigit_and_space(info))
		return (error_prompt("Error : input must contain only digit and spaces"));
	this->m_info[v] = info;
	return (1);
}