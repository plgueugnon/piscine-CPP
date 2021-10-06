#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <exception>
#include <iostream>
#include <ctime>

template <typename T>
class Array {

public:

	/* Canonical */
	Array( void ) : _max(0) {

		try
		{
			_array = new T[_max];
			std::cout << "default constructor called" << std::endl;
		}
		catch( const std::bad_alloc &e)
		{
			std::cerr << e.what() << std::endl;
		}

		return ;
	}

	~Array( void ) {

		try
		{
			delete[] _array;
			std::cout << "destructor called" << std::endl;
		}
		catch( const std::exception &e )
		{
			std::cerr << e.what() << '\n';
		}

		return ;
	}

	Array( Array const &src ) : _max(src._max) { // obligatoire d'allouer ici sinon copie de tab non existant
		
		_array = new T[_max];
		for(unsigned int i = 0; i < _max; i++)
			_array[i] = src._array[i];

		return ;
	}

	Array	&operator=( Array const &rhs ) {

		if ( this != &rhs )
		{
			delete[] _array;
			_array = new T[rhs._max];
			_max = rhs._max;
			if ( _max )
				for(unsigned int i = 0; i < _max; i++)
					_array[i] = rhs._array[i];
		}

		return ( *this );
	} 

	/* Non canonical */
	Array( unsigned int n )  : _max(n) {

		try
		{
			_array = new T[_max];
			std::cout << "constructor called" << std::endl;
		}
		catch( const std::bad_alloc &e)
		{
			std::cerr << e.what() << std::endl;
		}

		return ;
	}

	T	size_array( void ) const {

		return ( _max );
	}

	T	&operator[]( unsigned int i ) const {

		if ( i >= _max || i < 0 )
			throw Array::ArrayLimitReached();
		else
			return ( _array[i] );
	}

	class	ArrayLimitReached;

private:

	T	*_array;
	unsigned int	_max;

};

template <typename T>
class Array<T>::ArrayLimitReached : public std::exception {

public:

	virtual const char	*what( void ) const throw();

};

template <typename T>
const char	*Array<T>::ArrayLimitReached::what( void ) const throw() {

	return ( "ERROR: index is out of bound" );
}

#endif // __ARRAY_H__