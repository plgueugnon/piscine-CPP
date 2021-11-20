/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:12 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/20 11:25:12 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.h"

void	prompt(std::string str) {

	std::cout << str << std::endl;
}

int	main(void) {

	std::string cmd;
	Phonebook	pbk;

	prompt("Please enter a command");
	while (std::getline(std::cin, cmd))
	{
		if ((cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT"))
		{
			if (cmd == "EXIT")
				break ;
			if (cmd == "ADD")
				if (!add_a_contact(&pbk))
					break ;
			if (cmd == "SEARCH")
			{
				display_contact(&pbk);
				if (!search_contact(&pbk))
					break ;
			}
		}
		else
			prompt(RED"Wrong input - try ADD, SEARCH or EXIT"RST);
		prompt("Please enter a command");
	}
	prompt("You exited the program");
	return (0);
}