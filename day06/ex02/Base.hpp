/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:19:25 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 10:19:25 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
#define __BASE_H__

class Base {

public:

	virtual ~Base( void );

};

class A : public Base { };
class B : public Base { };
class C : public Base { };

#endif // __BASE_H__