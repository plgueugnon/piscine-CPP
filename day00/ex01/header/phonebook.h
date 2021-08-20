#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include <locale>

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

#define RST		"\033[0m"
#define RED		"\033[0;31m"
#define BLU		"\033[0;34m"
#define YEL		"\033[0;33m"

typedef enum	e_contact_input {

	first_name,
	last_name,
	nickname,
	phone_number,
	darkest_secret,
}				t_contact_input;

void	prompt(std::string str);
int		add_a_contact(Phonebook *pbk);
int		search_contact(Phonebook *pbk);
void	display_contact(Phonebook *pbk);

#endif