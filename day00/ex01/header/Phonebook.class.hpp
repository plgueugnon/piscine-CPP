#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

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