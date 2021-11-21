/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:39:02 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/21 23:39:03 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>
#include <string>

#define DEBUG 359
#define INFO 300
#define WARNING 534
#define ERROR 394

class Karen {

public:

	Karen( void );
	~Karen( void );
	void	complain( std::string level );
	void	letsHearKaren(int level, void (Karen::*action[])( void ));

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif // __KAREN_H__