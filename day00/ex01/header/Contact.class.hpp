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