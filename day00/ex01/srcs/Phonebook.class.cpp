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
	else if (i >= 8)
		this->m_index = 0;
	return (1);
}