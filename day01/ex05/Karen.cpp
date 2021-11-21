/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:16:01 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:38:02 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/******************************************************************************/
/* Syntax reminder :														  */
/* void (*f)( void )) = generic function pointer of type void                 */
/* void (class::*f)( void ) = pointer on a function member of class which	  */
/* in both this cases, no argument is taken									  */
/* class member functions pointed by f must not take any argument and have	  */
/* the same return value otherwise it will not compile						  */
/* f = &funct or f = funct means giving the address of funct to f pointer	  */
/******************************************************************************/

Karen::Karen( void )  {

	return ;
}

Karen::~Karen( void ) {

	return ;
}

/******************************************************************************/
/* To understand Karen::complain function syntax :							  */
/* First with "typedef void (Karen::*action)( void )"" = we create a void 	  */
/* pointer named action														  */
/* Then, with "action say[]"" we create an array of function pointers in	  */
/* which we register the address of "Karen actions" function				  */
/* By doing this "(this->*(say[i]))()" or "(*this.*(say[i]))()" we access the */
/* member function pointed at, by dereferencing "this" pointer				  */
/* As member functions we used only have void parameters, it is not possible  */
/* to initialize an array of function pointer as such : "action action[4]"	  */
/******************************************************************************/

void	Karen::complain(std::string level) {
	
	typedef void (Karen::*action)( void );
	std::string input [] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	action say[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	for (int i = 0; i < 4; i++)
		if (input[i] == level)
			(this->*(say[i]))();
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
