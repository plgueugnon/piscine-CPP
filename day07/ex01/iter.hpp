/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:38:44 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:38:58 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>
#include <string>

template <typename T>
void	iter( T *arr, size_t const size, void (&func)( T & ) ) {

	std::cout << "....iter function called with a function...." << std::endl;
	for ( size_t i = 0; i < size; i++ )
		func(arr[i]);

	return ;
}

/* ************************************************************************** */
/* Non mandatory - testing template specialization							  */
/* ************************************************************************** */
template <typename T>
void	iter( T *arr, size_t const size ) {

	std::cout << "....iter function called without third parameter...." << std::endl;
	for ( size_t i = 0; i < size; i++ )
		std::cout << arr[i] << std::endl;

	return ;
}

#endif // __ITER_H__