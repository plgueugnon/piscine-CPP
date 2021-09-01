#include "Karen.hpp"

Karen::Karen( void )  {

	return ;
}

Karen::~Karen( void ) {

	return ;
}

/* RAPPEL DE SYNTAXE */
/* void (*f)( void )) = ptr de fonction generique de type void et ne prenant pas d'arg */
/* void (class::*f)( void ) = ptr sur fonction membre de class ne prenant pas d'arg */
/* NB les fonctions membres de la class pointe par f devront ne pas prendre d'arg et avoir meme valeur retour sinon pas poss */
/* f = &funct ou f = funct == init du ptr de fonction sur l'adresse de funct */


void	Karen::complain(std::string level) {
	
	typedef void (Karen::*action)( void ); // creation d'un pointeur de type void appelle action
	std::string input [] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	action say[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error }; // je cree un tableau de ptr de fonction de type Karen::action et y place les addresses des fonction membres
	for (int i = 0; i < 4; i++)
		if (input[i] == level)
			(this->*(say[i]))(); // ptr this pointe sur tableau derefence sur un pointeur de fonction membre
			// (*this.*(say[i]))(); // autre ecriture possible en dereferençant le ptr this
	// typedef void (Karen::*action)(std::string level); // creation d'un pointeur de fonction nomme action et typedef action
	// action action[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; // approche impossible car fonctions ont uniquement un param void

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
