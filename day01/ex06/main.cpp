/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:39:06 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:39:06 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv) {

	if (argc > 1)
	{
		Karen	instance;
		instance.complain(argv[1]);
	}
	
	return ( 0 );
}


