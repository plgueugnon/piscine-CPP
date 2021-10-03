#ifndef __WHATEVER_H__
#define __WHATEVER_H__

#include <string>

template <typename T>
void	swap( T &a, T &b ) {

	T	tmp;
	tmp = a;
	a = b;
	b = tmp;

	return ;
}

template <typename T>
T	min( T const &a, T const &b ) {

	return ( a < b ? a : b );
}

template <typename T>
T	max( T const &a, T const &b ) {

	return ( a > b ? a : b );
}

#endif // __WHATEVER_H__