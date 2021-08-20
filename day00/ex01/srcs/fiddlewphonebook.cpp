#include "../header/phonebook.h"

std::string contact_input[] = {
	"first name", "last name", "nickname", "phone number", "darkest secret"};

std::string contact_tab[] = {
	"index", "first name", "last name", "nickname"};


int	add_cmd(Contact *contact) {

	int i = 0;
	std::string input;
	while (i < 5)
	{
		if (std::cin.eof())
			return (0);
		std::cout << BLU << "Please enter a " << contact_input[i] 
			<< RST << std::endl;
		if (std::getline(std::cin, input) && contact->setstr(input, i))
			i++;
	}
	prompt(YEL"New contact successfully added to crappy phonebook"RST);
	return (1);
}

int	add_a_contact(Phonebook *pbk) {

	if (pbk->getindex() >= 8)
		pbk->setindex(pbk->getindex());
	if (!add_cmd(&pbk->contact[pbk->getindex()]))
		return (0);
	pbk->setindex(pbk->getindex());
	return (1);
}

int	search_contact(Phonebook *pbk) {

	int			index = 0;

	prompt("Please enter the index number of the contact you want to see");
	while (1)
	{
		if (std::cin.eof())
			return (0);
		if ((std::cin >> index) && index > 0 && index < 9)
		{
			for(int i = 0; i < 5; i++)
			{
				std::cout << YEL << contact_input[i] << " : " << RST;
				std::cout << pbk->contact[index - 1].getstr(i) << std::endl;
			}
			break ;
		}
		else
		{
			prompt(RED"Wrong input - value should be a digit between 1 - 8"RST);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (1);
}

void	display_contact(Phonebook *pbk) {

	for(int k = 0; k < 3; k++)
		std::cout << std::setw(10) << contact_tab[k] << "|";
	std::cout << std::setw(10) << contact_tab[3] << std::endl;
	for(int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		for(int j = 0; j < 2; j++)
		{
			if (pbk->contact[i].getstr(j).length() >= 10)
				std::cout << std::setw(9) <<\
					pbk->contact[i].getstr(j).substr(0, 9) << ".|";
			else
				std::cout << std::setw(10) << pbk->contact[i].getstr(j) << "|";
		}
		if (pbk->contact[i].getstr(2).length() >= 10)
			std::cout << std::setw(9) << pbk->contact[i].getstr(2).substr(0,9)\
				<< "." << std::endl;
		else
			std::cout << std::setw(10) << pbk->contact[i].getstr(2)\
				<< std::endl;
	}
}