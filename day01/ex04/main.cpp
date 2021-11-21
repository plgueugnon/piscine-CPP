/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:12:35 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:12:36 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error_sig(std::string errMsg) {

	std::cerr << errMsg << std::endl;
	return ( 1 );
}

void	replace_values(std::string & buffer, std::string s1, std::string s2, std::string tmp) {

	size_t	pos = buffer.find(s1);

	while ( pos != std::string::npos )
	{
		buffer.erase(pos, s1.size());
		buffer.insert(pos, s2);
		pos = buffer.find(s1);
	}
	tmp.append(".replace");
	std::ofstream	outfile(tmp);
	outfile << buffer;
	outfile.close();

	return ;
}

int	main(int argc, char **argv) {

	std::string		s1;
	std::string		s2;
	std::ifstream	infile(argv[1]);
	std::string		buffer;
	std::string		tmp;

	if (argc != 4)
		return (error_sig("Error: 3 arg required"));
	s1.assign(argv[2]);
	s2.assign(argv[3]);
	if (s1.empty() || s2.empty())
		return (error_sig("Error: arg cannot be empty"));
	if (infile.is_open())
	{
		while (std::getline(infile, tmp))
		{
			buffer.append(tmp);
			buffer.append("\n");
		}
		buffer.pop_back();
		infile.close();
	}
	else
		return (error_sig("Error: first arg must be a valid file"));
	tmp.assign(argv[1]);
	replace_values(buffer, s1, s2, tmp);

	return ( 0 );
}