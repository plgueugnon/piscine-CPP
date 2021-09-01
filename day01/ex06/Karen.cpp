#include "Karen.hpp"

// typedef void (Karen::*action)( void );

Karen::Karen( void )  {

	return ;
}

Karen::~Karen( void ) {

	return ;
}

int	strval(std::string str) {

	int s = 0;

	for (unsigned long i = 0; i < str.size(); i++)
		s += str.operator[](i);

	return ( s );
}

void	Karen::letsHearKaren(int level, void (Karen::*action[])( void )) {

	std::string input [] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	while(level < 4)
	{
		std::cout << "[ " << input[level] << " ]" << std::endl;
		((*this).*(action[level]))();
		std::cout << std::endl;
		level++;
	}
	return ;
}

void	Karen::complain(std::string level) {
	
	typedef void (Karen::*action)( void );
	action say[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	switch (strval(level))
	{
		case (DEBUG):
			letsHearKaren(0, say);
			break;
		case (INFO):
			letsHearKaren(1, say);
			break;
		case (WARNING):
			letsHearKaren(2, say);
			break;
		case (ERROR):
			letsHearKaren(3, say);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	return ;
}

void	Karen::debug( void)  {
	
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	
	return ;
}

void	Karen::info( void ) {
	
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;

	return ;
}

void	Karen::warning( void ) {
	
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	
	return ;
}

void	Karen::error( void ) {
	
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

	return ;
}
