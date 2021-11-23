/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:16:35 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:18:06 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct	Data {

	int			i;
	char		c;
	std::string	s;

}				Data;


/* ************************************************************************** */
/* takes a ptr of type Data and returns it converted in type uintptr_t 		  */
/* ************************************************************************** */
uintptr_t	serialize( Data	*ptr ) {

	return ( reinterpret_cast<uintptr_t>(ptr) );
}

/* ************************************************************************** */
/* takes a value of type uintptr_t and returns it converted as a ptr of		  */
/* type Data																  */
/* ************************************************************************** */
Data	*deserialize( uintptr_t raw ) {

	return ( reinterpret_cast<Data*>(raw) );
}

int	main( void ) {

	Data	d = { 1, 65, "yoyoyo" };

	std::cout << "Before doing anything, let's see the struct Data" << std::endl;
	std::cout << "Data address = " << &d << std::endl;
	std::cout << "Data d content =\nint i = " << d.i << "\nchar c = " << d.c << "\nstring s = " << d.s << std::endl;

	std::cout << "....serialiaziation n stuff...." << std::endl;
	uintptr_t	serialize_ptr = serialize(&d);
	Data		*deserialize_ptr = deserialize(serialize_ptr);

	std::cout << "Now let's see the differences" << std::endl;
	std::cout << "serialize ptr = " << serialize_ptr << std::endl;
	std::cout << "deserialize ptr = " << deserialize_ptr << std::endl;
	std::cout << "Data deserialize_ptr content =\nint i = " << deserialize_ptr->i << "\nchar c = " << deserialize_ptr->c << "\nstring s = " << deserialize_ptr->s << std::endl;

	return ( 0 );
}